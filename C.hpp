#ifndef C_hpp
#define C_hpp

#include <string>

enum TokenType{		//TODO: Arrange them in class order so a range of consecutive numbers represents a class
	None   = 0, 	// This indicates there are no more tokens
	SEMICOLON =1,
	PREPROCESSOR =2,
	COMMA =3,		
	POINTER =4,
	NUMBER =5,
	HEX =6,
	OCTAL =7,
	DECIMAL =8,
	int_NUM =9,
	DIGIT =10,
	IDENTIFIER =11,
	WHITESPACE =12,
	NEWLINE =13,
	AUTO =14,	   	 //start of keywords, no.14
	BREAK =15,
	CASE =16,
	CHAR =17,
	CONST =18,
	CONTINUE =19,
	DEFAULT =20,
	DO =21,
	DOUBLE =22,
	ELSE =23,
	ENUM =24,
	EXTERN =25,
	FLOAT =26,
	FOR =27,
	GOTO =28,
	IF =29,
	INT =30,
	LONG =31,
	REGISTER =32,
	RETURN =33,
	SHORT =34,
	SIGNED =35,
	SIZEOF =36,
	STATIC =37,
	STRUCT =38,
	SWITCH =39,
	TYPEDEF =40,
	UNION =41,
	UNSIGNED =42,
	VOID =43,
	VOLATILE =44,
	WHILE =45,
	SIGNED_CHAR =46,
	UNSIGNED_CHAR =47,
	UNSIGNED_SHORT =48,
	UNSIGNED_INT =49,
	UNSIGNED_LONG =50,
	LONG_DOUBLE =51,
	LONG_LONG =52,
	UNSIGNED_LONG_LONG =53,
	INTMAX_T =54,
	UINTMAX_T =55,	//end of keywords, no.55
	LROUND =56,		//start of operators no.56
	RROUND =57,
	LSQUARE =58,
	RSQUARE =59,
	LCURLY =60,
	RCURLY =61,
	DOT_OP =62,
	POINTER_OP =63,
	LOGICAL_NOT_OP =64,
	BITWISE_NOT_OP =65,
	PLUS_OP =66,
	MINUS_OP =67,
	INC_OP =68,
	DEC_OP =69,
	MULT =70,
	DIV =71,
	MODULUS_OP =72,
	SHIFT_LEFT_OP =73,
	SHIFT_RIGHT_OP =74,
	LT =75,
	GT =76,
	LE =77,
	GE =78,
	EQ =79,
	NOT_EQ =80,
	AND =81,
	XOR =82,
	OR =83,
	LOG_AND =84,
	LOG_OR =85,
	COND_OP =86,
	ASSIGN_OP =87,
	SHRT_ASSIGNPLUS =88,
	SHRT_ASSIGNMINUS =89,
	SHRT_ASSIGNMULT =90,
	SHRT_ASSIGNMOD =91,
	SHRT_ASSIGNAND =92,
	SHRT_ASSIGNOR =93,
	SHRT_ASSIGNXOR =94,
	SHRT_ASSIGNLSHIFT =95,
	SHRT_ASSIGNRSHIFT =96, //end of operators no.96
	STRING_LITERAL =97,
	COMMENT =98
};

union TokenValue{
    double const_numeric;
    char   const_letter;
    std::string  *Type;
};


// This is a global variable used to move the
// attribute value from the lexer back to the
// main program.
// By convention it is called yylval, as that is
// the name that will be automatially generated
// by Bison.
extern TokenValue yylval;

// This is the lexer function defined by flex. Each
// time it is called, a token type value will be
// returned.
extern int yylex();

#endif
