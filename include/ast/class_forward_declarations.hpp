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

class Pointer;


class AssignmentExpression;
class CastExpression;

class DirectAbstractDeclarator;
class AbstractDeclarator;
class ParameterDeclaration;
class ParameterList;
class ParameterTypeList;
class IdentifierList;
