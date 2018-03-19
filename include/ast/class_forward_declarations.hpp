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


struct bindings {
		int word_size = 0;
		std::string id = "";		//name of variable
		double value = 0;
		std::string scope = "";		//name of scope the variable is in
		int offset = 0;			//the stack offset saved on the stack to load it from
		std::string DataType;
		int param_offset = 0;
	};

struct function_details{
	int paramters_size = 0;
	std::string name = "";
	std::string returnType = "";
};

struct Context{
	bool rhs_of_expression=false;
	bool lhs_of_assignment=false;
	std::string op_name="";

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
	int totalStackArea = 24+104; //For the whole stack ------------------modified
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
	std::vector<std::string> Cases;
	bool no_return = true;
	bool ReadingSwitch = false;
	int CaseVectorSize =0;
	std::vector<std::string> LoopHeader;
	bool continue_for = false;
	Expression* TestConditionContinue = NULL;
	
	std::vector<function_details> functions_declared;
	function_details funcion_temp;
	std::vector<std::string> Scopes;
	int argument_no = 0;
	bool parameter = false;
	int max_offset = 16;   // modified
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
	
	int SwitchControl=0;
	bool inCase=false;
	int VectorSize=0;
	bool is_postfix = false;
	int good_i = 0;
	std::string SHORTCIRCUIT;
	std::string SHORTCIRCUIT2;

	int labels = 1;

	int eval[1000];
	std::vector<int> end_labels;
	int lab =1;
	bool SWreading = 0;
	int case_counter = 0;
	int no_cases = 0;
};
inline std::string labgen(Context& contxt)
{
	return std::to_string(contxt.labels++);
}

inline void typePromotion(int reg1,int reg2, std::ofstream& file,Context& contxt){

	if(contxt.regType[reg1] != 'f' && contxt.regType[reg2] != 'f'){
		return;
	}
	else if(contxt.regType[reg1] != contxt.regType[reg2]){
		if(contxt.regType[reg1] == 'i' || contxt.regType[reg1] == 'u' || contxt.regType[reg1] == 'c' && contxt.regType[reg2] == 'f'){
			file << std::endl << "\ttrunc.w.s\t$f" << reg2 << ",$f" << reg2 << ",$" << reg2;
			file << std::endl << "\tmfc1\t$f" << reg2 << ",$" << reg2;
			if(contxt.regType[reg1] == 'u'){
				file << std::endl << "\tandi\t$" << reg2 << ",$" << reg2 << ",0xFF";
			}
			return;
		}
		if(contxt.regType[reg1] == 'f' && contxt.regType[reg2] == 'i' || contxt.regType[reg2] == 'u' || contxt.regType[reg2] == 'c'){
			file << std::endl << "\tmtc1\t$" << reg2 << ",$f" << reg2;
			file << std::endl << "\tcvt.s.w\t$f" << reg2 << ",$f" << reg2;
			return;
		}
	}

}



inline void store_locals(Context& contxt, std::ofstream& file, int good_index)
{
	if(contxt.Variables[good_index].word_size==1) {
					file << std::endl << "\tsb\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id;
					contxt.regType[contxt.Regs+1]='c';
				}				
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float"){
					file << std::endl << "\tsw\t$" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";
					contxt.regType[contxt.Regs+1]='i';
				}
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float"){ //TODO: CHECK OK
					file << std::endl << "\tswc1\t$f" << contxt.Regs+1 << "," << contxt.Variables[good_index].offset << "($sp) #" << contxt.Variables[good_index].id << "\n";					contxt.regType[contxt.Regs+1]='f';
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
	if(contxt.Variables[good_index].word_size==1) {
		file << std::endl << "\tsb\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
		contxt.regType[contxt.Regs+1]='c';
		}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float"){
		file << std::endl << "\tsw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
		contxt.regType[contxt.Regs+1]='i';
	}
	else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float"){ //TODO: CHECK OK
		file << std::endl << "\tswc1\t$f" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+2 << ")";
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
	file << std::endl << "\tlui\t$" << contxt.Regs+1 << ", %hi(" << contxt.Variables[good_index].id << ")";
				if(contxt.Variables[good_index].word_size==1) 
				{
					file << std::endl << "\tlb\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($" << contxt.Regs+1 << ")";
					contxt.regType[contxt.Regs+1]='c';
				}
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType != "float")
				{
					file << std::endl << "\tlw\t$" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";                            	
					contxt.regType[contxt.Regs+1]='i';
   				}
				else if(contxt.Variables[good_index].word_size==4 && contxt.Variables[good_index].DataType == "float") //TODO: CHECK OK
				{
					file << std::endl << "\tlwc1\t$f" << contxt.Regs+1 << ", %lo(" << contxt.Variables[good_index].id << ")($"<< contxt.Regs+1 << ")";                            	
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

inline std::string labelGenScope(Context& contxt) {


	contxt.LastScope.push_back(std::to_string(contxt.LastScope.size()));
	
	return contxt.LastScope[contxt.LastScope.size()-1];
}

inline std::string labelGenLogical(Context& contxt) {

	contxt.LogicalLabels.push_back(std::to_string(contxt.LogicalLabels.size()));
	return contxt.LogicalLabels[contxt.LogicalLabels.size()-1];
		
}



inline std::string labelGen(Context& contxt) {

	contxt.Labels.push_back(std::to_string(contxt.Labels.size()));
	return contxt.Labels[contxt.Labels.size()-1];
		
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


inline void useReg(std::ofstream& file,std::string operation, int register_no=2) {				//USE THIS FOR USING REGISTERS, HAVE TO RECALL AFTER YOU ARE DONE.

	if(operation == "start") {	
		file << std::endl << "\taddiu\t $sp,$sp,-4";
		file << std::endl << "\tsw\t" << "$" << register_no << ",0($sp)";
		biasedOffset += 4;
	}
	else{
		file << std::endl << "\tlw\t" << "$" << register_no << ",0($sp)";
		file << std::endl << "\taddiu\t $sp,$sp,4";
		biasedOffset -= 4;		
	}
}



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
class ConstantExpression;
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