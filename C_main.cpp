#include "C.hpp"
#include <iostream>
#include <vector>
#include <assert.h>
#include <unordered_map>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

// Define the instance of the variable that is declared in the C.hpp header
TokenValue yylval;

int main() {

    vector<string> Keyword;
    vector<string> Identifier;
    vector<string> Operator;
    vector<string> Constant;
    vector<string> StringLiteral;
    stringstream ss;
    std::string Invalid("An unknown token type");

    int StreamLine, SourceLine;

    std::string SourceFile;

const char * TokenT[] = { 
	"None", 
	"SEMICOLON",
	"PREPROCESSOR",
	"COMMA" ,		
	"POINTER" ,
	"NUMBER",
	"HEX" ,
	"OCTAL" ,
	"DECIMAL" ,
	"int_NUM" ,
	"DIGIT",
	"IDENTIFIER" ,
	"WHITESPACE" ,
	"NEWLINE" ,
	"AUTO" ,	   	 //start of keywords, no.14
	"BREAK" ,
	"CASE" ,
	"CHAR" ,
	"CONST" ,
	"CONTINUE" ,
	"DEFAULT" ,
	"DO" ,
	"DOUBLE" ,
	"ELSE" ,
	"ENUM" ,
	"EXTERN" ,
	"FLOAT" ,
	"FOR",
	"GOTO",
	"IF",
	"INT" ,
	"LONG" ,
	"REGISTER" ,
	"RETURN" ,
	"SHORT" ,
	"SIGNED" ,
	"SIZEOF" ,
	"STATIC" ,
	"STRUCT" ,
	"SWITCH" ,
	"TYPEDEF" ,
	"UNION" ,
	"UNSIGNED" ,
	"VOID" ,
	"VOLATILE" ,
	"WHILE" ,
	"SIGNED_CHAR" ,
	"UNSIGNED_CHAR" ,
	"UNSIGNED_SHORT" ,
	"UNSIGNED_INT" ,
	"UNSIGNED_LONG" ,
	"LONG_DOUBLE" ,
	"LONG_LONG" ,
	"UNSIGNED_LONG_LONG" ,
	"INTMAX_T" ,
	"UINTMAX_T" ,	//end of keywords, no.55
	"LROUND" ,		//start of operators no.56
	"RROUND",
	"LSQUARE" ,
	"RSQUARE",
	"LCURLY" ,
	"RCURLY" ,
	"DOT_OP" ,
	"POINTER_OP" ,
	"LOGICAL_NOT_OP" ,
	"BITWISE_NOT_OP" ,
	"PLUS_OP" ,
	"MINUS_OP" ,
	"INC_OP" ,
	"DEC_OP" ,
	"MULT" ,
	"DIV" ,
	"MODULUS_OP" ,
	"SHIFT_LEFT_OP" ,
	"SHIFT_RIGHT_OP" ,
	"LT" ,
	"GT" ,
	"LE" ,
	"GE" ,
	"EQ" ,
	"NOT_EQ" ,
	"AND" ,
	"XOR" ,
	"OR" ,
	"LOG_AND" ,
	"LOG_OR" ,
	"COND_OP" ,
	"ASSIGN_OP" ,
	"SHRT_ASSIGNPLUS" ,
	"SHRT_ASSIGNMINUS" ,
	"SHRT_ASSIGNMULT" ,
	"SHRT_ASSIGNMOD" ,
	"SHRT_ASSIGNAND" ,
	"SHRT_ASSIGNOR" ,
	"SHRT_ASSIGNXOR" ,
	"SHRT_ASSIGNLSHIFT" ,
	"SHRT_ASSIGNRSHIFT" , //end of operators no.96
	"STRING_LITERAL",
	"COMMENT",
	"ELLIPSIS" };  // The blank string at the beginning is so that Sunday is 1 instead of 0.
  
    while(1){
            TokenType type=(TokenType)yylex();

	if( type == 0) {
	
		break;
	
	}

	else if( type >= 1 && type <= 99) {

		string temp;
		temp = *(yylval.Type);
		cout << TokenT[type] << ": " << temp << endl;
		delete yylval.Type;

	}


    	else{
		cout << Invalid << endl << " Text: " << *(yylval.Type) << endl;
        	assert(0); // There are only n token types.
        	return 1;

    	}
    }

    return 0;
}
