#ifndef CLASS_FORWARD
#define CLASS_FORWARD



struct bindings {
		int word_size = 0;
		std::string id = "";		//name of variable
		double value = 0;
		std::string scope = "";		//name of scope the variable is in
		int offset = 0;			//the stack offset saved on the stack to load it from
		std::string DataType;
	};

struct Context{
	bool rhs_of_expression=false;
	bool lhs_of_assignment=false;
	std::string op_name="";

	bool initialized = false;
	bool function = false;
	bool negative = false; 	//is value a negative number?
	bool float_ = false;   //is value a floating point?
	bool is_unsigned = false;
	bool protect = false; // to not overwrite function_id
	bool reading = false; // are we reading for stack allocation or are we executing?
	std::string funct_id = "";
	std::vector<bindings> Variables;
	bindings variable;
	int totalStackArea = 0; //For the whole stack
	int StackOffset = 0;	//the offset from $sp for each variable
	int Regs=1;

	int global_value=0;
	int current_value=0;
};

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
class AssignmentExpression;
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
