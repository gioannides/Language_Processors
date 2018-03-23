#ifndef CLASS_FORWARD
#define CLASS_FORWARD
#include <limits.h>
#include <math.h>
#include <bitset>
#include <memory>
#include <stdio.h>
#include <string.h>
class AssignmentExpression;
class Expression;
class InitializerList;
class Initializer;
class ConstantExpression;

struct bindings {
		int word_size = 0;
		std::string id = "";		//name of variable
		double value = 0;
		std::string scope = "";		//name of scope the variable is in
		int offset = 0;			//the stack offset saved on the stack to load it from
		std::string DataType;
		std::string StorageClass;
		int param_offset = 0;
	};

struct function_details{
	int paramters_size = 0;
	std::string name = "";
	std::string returnType = "";
};

struct EnumValues{

	std::string IDENTIFIER;
	double value;
};

struct Enumeration{

	std::string EnumID;
	std::vector<EnumValues> EnumList;

};

struct typedefs{

	int Scope=0;
	std::string TypeSpec;
	std::string DummyName;

};

struct Switch{

	ConstantExpression* ConstantTemp;
	std::string CaseID;

};


struct Context{
	std::vector<Enumeration> Enum;
	Enumeration EnumTemp;
	EnumValues EnumValuesTemp;
	int EnumCounter=0;
	bool EnumExists = false;
	bool enum_constant=false;
	std::vector<int> EnumOperands;
	int newScope=0;

	std::vector<typedefs> TypeAssoc;
	typedefs TypeDef;
	bool typedefs_=false;


	bool rhs_of_expression=false;
	bool lhs_of_assignment=false;
	std::string op_name="";

	bool sizeof_=false;
	int SizeOf=0;

	int declarations_in_a_list=1;

	int exclamation = 0;
	int tilde = 0;
	int negative = 0;


	int increment = false;
	bool decrement = false;
	bool is_Selective = false;
	bool elseif = false;
	bool initialized = false;
	bool function = false;
	
	
	bool is_unsigned = false;
	bool protect = false; // to not overwrite function_id
	bool reading = false; // are we reading for stack allocation or are we executing?
	std::string funct_id = "";
	std::vector<bindings> Variables;
	bindings variable;
	int totalStackArea = 12+104; //For the whole stack
	int StackOffset = 0;	//the offset from $sp for each variable
	int Regs=1;
	std::string AssignmentOperator = "df";
	
	//int global_value=0;
	//int current_value=0;
	int global_value_float=0;
	
	int current_value_float=0;
	bool float_ = false;   //is value a floating point?
	char regType[31];
	bool functionReturnType=false;
	std::string functionReturnTypetemp;

	std::vector<std::string> EndSwitchLoop;
	std::vector<std::string> Labels;
	std::vector<Switch> Cases;
	bool no_return = true;
	bool ReadingSwitch = false;
	int CaseVectorSize =0;
	std::vector<std::string> LoopHeader;
	bool continue_for = false;
	Expression* TestConditionContinue = NULL;
	
	std::vector<function_details> functions_declared;
	function_details funcion_temp;
	std::vector<std::string> Scopes;
	std::vector<std::string>FunctionScopes;
	int argument_no = 0;
	bool parameter = false;
	int max_offset = 16;
	bool is_function_call = false;

	char UnaryOperator;
	std::vector<std::string> LastScope;
	std::vector<char> UnaryOperators;
	std::vector<std::string> LogicalLabels;
	std::string END;
	int post_incr = 0;
	int post_decr = 0;	
	
	int BreakCounter=0;
	std::vector<int>BreakTracker;
	std::vector<int>ContinueTracker;
	int ContinueCounter=0;
	
	int SwitchControl=0;
	std::vector<Switch> SwitchCase;
	Switch SwitchTemp;
	int inCase=0;
	int VectorSize=0;
	bool is_postfix = false;
	int good_i = 0;
	std::string SHORTCIRCUIT;
	std::string SHORTCIRCUIT2;

	int eval[10000];
	float eval_f[10000];
	int allocate=0;
	bool function_dec =false;

	int no_of_initial_values = 0;
	int global_offset = 0;
	int count_array_initializers = 0;
	int no_array_elements = 1;
	int nested_arrays=0;
	bool is_array =false;
};

inline std::string labelGenEnum(Context& contxt) {
	contxt.allocate++;
	return (std::to_string(contxt.allocate));
}


inline void typePromotion(int reg1,int reg2, std::ofstream& file,Context& contxt){

	if(contxt.regType[reg1] != 'f' && contxt.regType[reg2] != 'f' && reg2 > 1 && reg1 > 1){
		//do nothing
	}
	else if(contxt.regType[reg1] != contxt.regType[reg2] && reg2 > 1 && reg1 > 1){
		if(contxt.regType[reg1] != 'f'  && contxt.regType[reg2] == 'f'){
			file << std::endl << "\tmtc1\t$" << reg1 << ",$f" << reg1;
			file << std::endl << "\tcvt.s.w\t$f" << reg1 << ",$f" << reg1;
			if(contxt.regType[reg1] == 'u'){
				file << std::endl << "\tandi\t$" << reg1 << ",$" << reg1 << ",0xFF";
			}
		
		}
		else if(contxt.regType[reg1] == 'f' && contxt.regType[reg2] != 'f'){
			file << std::endl << "\tmtc1\t$" << reg2 << ",$f" << reg2;
			file << std::endl << "\tcvt.s.w\t$f" << reg2 << ",$f" << reg2;
			if(contxt.regType[reg1] == 'u'){
				file << std::endl << "\tandi\t$" << reg2 << ",$" << reg2 << ",0xFF";
			}
		}
	}

}



inline void store_locals(Context& contxt, std::ofstream& file, int good_index)
{
	if(contxt.Variables[good_index].word_size==1) {
		if(contxt.regType[contxt.Regs+1] == 'f'){
			file << std::endl << ".set macro" << std::endl;
			file << std::endl << "\ttrunc.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1 << ",$" << contxt.Regs+1;
			file << std::endl << ".set nomacro" << std::endl;
			file << std::endl << "\tmfc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			if(contxt.regType[contxt.Regs+1] == 'u'){
				file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0xFF";
			}
		}
		file << std::endl << "\tsb\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
		contxt.regType[contxt.Regs+1]='c';
	}				
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float"){
		if(contxt.regType[contxt.Regs+1] == 'f'){
			file << std::endl << ".set macro" << std::endl;
			file << std::endl << "\ttrunc.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1 << ",$" << contxt.Regs+1;
			file << std::endl << ".set nomacro" << std::endl;
			file << std::endl << "\tmfc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			if(contxt.regType[contxt.Regs+1] == 'u'){
				file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0xFF";
			}
		}	
		file << std::endl << "\tsw\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
		contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float"){ //TODO: CHECK OK		
		if(contxt.regType[contxt.Regs+1] != 'f'){
			file << std::endl << "\tmtc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			file << std::endl << "\tcvt.s.w\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
		}

		file << std::endl << "\tswc1\t$f" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
		contxt.regType[contxt.Regs+1]='f';
	}
	if(contxt.Variables[good_index].DataType == "unsigned") {
		contxt.is_unsigned = true;
	}
	if(contxt.Variables[good_index].DataType == "float") {
		contxt.float_ = true;
	}
}
inline void store_globals(Context& contxt, std::ofstream& file, int good_index)
{
	file << std::endl << "\tlui\t$" << contxt.Regs+2 << ", %hi(" << contxt.Variables[good_index].id << ")";
		file << std::endl << "\tla $" << contxt.Regs+2 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
	if(contxt.nested_arrays){	
		file << std::endl << "\tadd $" << contxt.Regs+2 << ", $" << contxt.Regs+2 << ", $25";
	}
	if(contxt.Variables[good_index].word_size==1) {
		if(contxt.regType[contxt.Regs+1] == 'f'){
			file << std::endl << ".set macro" << std::endl;
			file << std::endl << "\ttrunc.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1 << ",$" << contxt.Regs+1;
			file << std::endl << ".set nomacro" << std::endl;
			file << std::endl << "\tmfc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			if(contxt.regType[contxt.Regs+1] == 'u'){
				file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0xFF";
			}
		}
		file << std::endl << "\tsb $" << contxt.Regs+1 << ", 0($" << contxt.Regs+2 << ")";			
		//file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
		contxt.regType[contxt.Regs+1]='c';
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float"){

		if(contxt.regType[contxt.Regs+1] == 'f'){
			file << std::endl << ".set macro" << std::endl;
			file << std::endl << "\ttrunc.w.s\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1 << ",$" << contxt.Regs+1;
			file << std::endl << ".set nomacro" << std::endl;
			file << std::endl << "\tmfc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			if(contxt.regType[contxt.Regs+1] == 'u'){
				file << std::endl << "\tandi\t$" << contxt.Regs+1 << ",$" << contxt.Regs+1 << ",0xFF";
			}
		}	
		file << std::endl << "\tsw $" << contxt.Regs+1 << ", 0($" << contxt.Regs+2 << ")";
		//file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
		contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float"){ //TODO: CHECK OK
		
		if(contxt.regType[contxt.Regs+1] != 'f'){
			file << std::endl << "\tmtc1\t$" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
			file << std::endl << "\tcvt.s.w\t$f" << contxt.Regs+1 << ",$f" << contxt.Regs+1;
		}
		file << std::endl << "\tswc1 $" << contxt.Regs+1 << ", 0($" << contxt.Regs+2 << ")";
		//file << std::endl << "\tswc1\t$f" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
		contxt.regType[contxt.Regs+1]='f';
	}
	if(contxt.Variables[good_index].DataType == "unsigned") {
		contxt.is_unsigned = true;
	}
	if(contxt.Variables[good_index].DataType == "float") {
		contxt.float_ = true;
	}
}


inline void load_locals(Context& contxt, std::ofstream& file, int good_index)
{
	if(contxt.Variables[good_index].word_size==1)  
	{
		file << std::endl << "\tlb\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
		contxt.regType[contxt.Regs+1]='c';
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float")
	{
		file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;			
		contxt.regType[contxt.Regs+1]='i';					
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float") //TODO: CHECK OK
	{
		file << std::endl << "\tlwc1\t$f" << contxt.Regs+1 << ", " << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
		file << std::endl << "\tnop\t";
		contxt.regType[contxt.Regs+1]='f';		
	}
	if(contxt.Variables[good_index].DataType == "unsigned") 
				{
					contxt.is_unsigned = true;			
				}
				if(contxt.Variables[good_index].DataType == "float") {
					contxt.float_ = true;
				}
}
inline void load_globals(Context& contxt, std::ofstream& file, int good_index)
{
	file << std::endl << "\tlui $" << contxt.Regs+1 << ", %hi(" << contxt.Variables[good_index].id << ")";
	file << std::endl << "\tla $" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+1 << ")";
	if(contxt.nested_arrays){
		file << std::endl << "\tadd $" << contxt.Regs+1 << ", $" << contxt.Regs+1 << ", $25";				
	}
				if(contxt.Variables[good_index].word_size==1) 
				{
					file << std::endl << "\tlb $" << contxt.Regs+1 << ", 0($" << contxt.Regs+1 << ")";
					//file << std::endl << "\tlb $" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+1 << ")";
					contxt.regType[contxt.Regs+1]='c';
				}
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float")
				{
					file << std::endl << "\tlw $" << contxt.Regs+1 << ", 0($" << contxt.Regs+1 << ")";
					//file << std::endl << "\tlw $" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";                            	
					contxt.regType[contxt.Regs+1]='i';
   				}
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float") //TODO: CHECK OK
				{	file << std::endl << "\tlwc1 $" << contxt.Regs+1 << ", 0($" << contxt.Regs+1 << ")";
					//file << std::endl << "\tlwc1 $f" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";     
		                       	file << std::endl << "\tnop\t";
					contxt.regType[contxt.Regs+1]='f';
   				}
   				if(contxt.Variables[good_index].DataType == "unsigned") 
				{
					contxt.is_unsigned = true;			
				}
				if(contxt.Variables[good_index].DataType == "float") {
					contxt.float_ = true;
				}
}
inline void postfix_ops(Context& contxt, std::ofstream& f) //this needs to be fixed for globals
{
	contxt.Regs++;
	int index = contxt.good_i;
	if(contxt.AssignmentOperator == "++" && contxt.is_postfix && !contxt.reading)
	{ 
		//std::cout << std::endl << "got here" << std::endl;
		f << "\n\taddi\t$" << contxt.Regs+1 << ", $" << contxt.Regs << ", 1 #++"; //maybe +2
		//if(contxt.Variables[contxt.good_i].word_size==1) {
		//	f << std::endl << "\tsb\t$" << contxt.Regs+1 << "," << contxt.Variables[contxt.good_i].offset << "($sp) #" << contxt.Variables[contxt.good_i].id;			
		//}				
		if(contxt.Variables[contxt.good_i].scope=="global")
		{
			store_globals(contxt, f, index);
		}
		else 
		{
			store_locals(contxt, f, index);
			//f << std::endl << "\tsw\t$" << contxt.Regs+1 << "," << contxt.Variables[contxt.good_i].offset << "($sp) #" << contxt.Variables[contxt.good_i].id << "\n";
		}
		//f << "\n\tsw\t$" << contxt.Regs+1 << ", " << contxt.Variables[contxt.good_i].offset << "($sp)" << " #" << contxt.Variables[contxt.good_i].id;
		contxt.is_postfix=false;
	}
	else if (contxt.AssignmentOperator == "--" && contxt.is_postfix && !contxt.reading)
	{
		//std::cout << std::endl << "got here" << std::endl;

		f << "\n\taddi\t$" << contxt.Regs+1 << ", $" << contxt.Regs << ", -1 #--";
		
		if(contxt.Variables[contxt.good_i].scope=="global")
		{
			store_globals(contxt, f, index);
		}
		else 
		{
			store_locals(contxt, f, index);
			//f << std::endl << "\tsw\t$" << contxt.Regs+1 << "," << contxt.Variables[contxt.good_i].offset << "($sp) #" << contxt.Variables[contxt.good_i].id << "\n";
		}
		//f << "\n\tsw\t$" << contxt.Regs+1 << ", " << contxt.Variables[contxt.good_i].offset << "($sp)" << " #" << contxt.Variables[contxt.good_i].id;
		contxt.is_postfix=false;
	} 
	contxt.Regs--;
}
inline void print_variables(Context& contxt, std::ofstream& f){
	for(int i=0; i<contxt.Variables.size(); i++)
	{ 
		f << "\n#" << contxt.Variables[i].id << " - " << contxt.Variables[i].scope << " - " << contxt.Variables[i].word_size << " - "<< contxt.Variables[i].value << " - " << contxt.Variables[i].offset << "-" << contxt.Variables[i].param_offset;
		std::cout << "\n" << contxt.Variables[i].id << " - " << contxt.Variables[i].scope << " - " << contxt.Variables[i].word_size << " - "<< contxt.Variables[i].value << " - " << contxt.Variables[i].offset << "-" << contxt.Variables[i].param_offset;
	}
	f << "\n\n";
	std::cout << "\n\n";
}
inline void print_scopes(Context& contxt, std::ofstream& f){
	if(contxt.Scopes.size()>0)
	{
		std::cout << std::endl;
		for(int i=contxt.Scopes.size()-1; i>=0; i--)
		{
			std::cout << contxt.Scopes[i] << " - ";
		}
		std::cout << std::endl;
	}
}
inline void print_declared(Context& contxt, std::ofstream& f){
	if(contxt.functions_declared.size()>0)
	{
		std::cout << std::endl;
		for(int i=contxt.functions_declared.size()-1; i>=0; i--)
		{
			std::cout << contxt.functions_declared[i].name << " - " << contxt.functions_declared[i].paramters_size << std::endl;
			f << "# "<< contxt.functions_declared[i].name << " - " << contxt.functions_declared[i].paramters_size << std::endl;
		}
		std::cout << std::endl;
	}
}

inline std::string labelGenScope(Context& contxt) {
	contxt.allocate++;
	contxt.LastScope.push_back(std::to_string(contxt.allocate));
	
	return contxt.LastScope[contxt.LastScope.size()-1];
}

inline std::string labelGenLogical(Context& contxt) {
	contxt.allocate++;
	contxt.LogicalLabels.push_back(std::to_string(contxt.allocate));
	return contxt.LogicalLabels[contxt.LogicalLabels.size()-1];
		
}



inline std::string labelGen(Context& contxt) {
	contxt.allocate++;
	contxt.Labels.push_back(std::to_string(contxt.allocate));
	return contxt.Labels[contxt.Labels.size()-1];
		
}


inline void findSize(Context& contxt,std::string IDENTIFIER){
			int i,j;
			bool found = false;
			for(i=contxt.Variables.size()-1; i>=0; i--) {
				for (j=contxt.Scopes.size()-1; j>=0; j--)
				{
					if(contxt.Variables[i].scope == contxt.Scopes[j] && IDENTIFIER == contxt.Variables[i].id) 
					{
						found = true;
						if(contxt.Variables[i].DataType == "int"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "float"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "char"){
							if( contxt.SizeOf < 1)
								contxt.SizeOf = 1;
						}
						else if(contxt.Variables[i].DataType == "short"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 2;
						}
						else if(contxt.Variables[i].DataType == "long"){
							if( contxt.SizeOf < 8)
								contxt.SizeOf = 8;
						}
						else if(contxt.Variables[i].DataType == "unsigned"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "signed"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "double"){
							if( contxt.SizeOf < 8)
								contxt.SizeOf = 8;
						}
						else if(contxt.Variables[i].DataType == "void"){
							if( contxt.SizeOf < 1)
								contxt.SizeOf = 1;
						}				
						i = -1;
						j = -1;
					}									
				}
			  }
			  if(!found){
				for(i=contxt.Variables.size()-1; i>=0; i--) {
					if(contxt.Variables[i].scope == "global" && IDENTIFIER == contxt.Variables[i].id) 
					{
						if(contxt.Variables[i].DataType == "int"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "float"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "char"){
							if( contxt.SizeOf < 1)
								contxt.SizeOf = 1;
						}
						else if(contxt.Variables[i].DataType == "short"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 2;
						}
						else if(contxt.Variables[i].DataType == "long"){
							if( contxt.SizeOf < 8)
								contxt.SizeOf = 8;
						}
						else if(contxt.Variables[i].DataType == "unsigned"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "signed"){
							if( contxt.SizeOf < 4)
								contxt.SizeOf = 4;
						}
						else if(contxt.Variables[i].DataType == "double"){
							if( contxt.SizeOf < 8)
								contxt.SizeOf = 8;
						}
						else if(contxt.Variables[i].DataType == "void"){
							if( contxt.SizeOf < 1)
								contxt.SizeOf = 1;
						}				
						i = -1;
						j = -1;
						}									
					}
			}
}

inline std::string GetBinary32( float value )
{
    union
    {
         float input;   // assumes sizeof(float) == sizeof(int)
         int   output;
    }    data;
 
    data.input = value;
 
    std::bitset<sizeof(float) * CHAR_BIT>   bits(data.output);
 
    return bits.to_string<char,std::char_traits<char>,std::allocator<char> >();
}
		

class Node;



static int count_globals = 0;				//Will count the number of global variables
static int counter_py(0);				//Will be used for indentation
static bool function = false;				//Are we inside a function?
static bool ParametrizedFunction = false;
static bool main_ = false;				//Will be used for emitting the main python code
static std::vector<std::string> GlobalVars; 		//Will be used to store the globals variables
static bool is_while = false;				//Identifies loops for indentation manners
static int parentheses = 0;
static bool elif = false;
static bool ParameterVariable = false;






//// ************************************* 			ANSI C-89



static int biasedOffset = 0;






class Node{

	public:

		
    		virtual  void print_C(std::ofstream& file) const  {
		}

		 virtual ~Node()  {}
};







class ExternalDeclaration;
class Declaration;
class TranslationalUnit;
class Declaration;
class DeclarationList;
class DirectDeclarator;

class DeclarationSpecifiers;
class TypeQualifier;
class TypeSpecifier;
class TranslationUnit;
class ConditionalExpression;
typedef Node* NodePtr;

class TranslationalUnit;
class FunctionDefinition;
class ExternalDeclaration;

class Statement;
class IterationStatement;
class LabeledStatement;
class SelectionStatement;
class StatementList;
class JumpStatement;
class ExpressionStatement;
class CompoundStatement;
class Declarator;
class ExpressionStatement;

class Pointer;
class PrimaryExpression;
class PostFixExpression;

class CastExpression;

class DirectAbstractDeclarator;
class AbstractDeclarator;
class ParameterDeclaration;
class ParameterList;
class ParameterTypeList;
class IdentifierList;


class SpecifierQualifierList ;
class Init_Declaration_List ;
class InclusiveAndExpression ;
class TypeName ;




#endif
