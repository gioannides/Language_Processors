%option noyywrap
%option yylineno

%{
/* Bring in our declarations for token types and
   the yylval variable. */

#include "C_parser.tab.hpp"
#include <stdlib.h>		
#include <string>
#include <iostream>		

void yyerror (char const *s);

int token(int T);
int vtoken(int T);


// This is to work around an irritating bug in Flex
extern "C" int fileno(FILE *stream);
%}

FLOAT_LIT	        ({FLOAT_FRACTION}{FLOAT_EXP}?|{FLOAT_DIG}{FLOAT_EXP}){FLOAT_SUFFIX}?
FLOAT_FRACTION          {FLOAT_DIG}?\.{FLOAT_DIG}|{FLOAT_DIG}\.
FLOAT_EXP               [eE]{FLOAT_SIGN}?{FLOAT_DIG}
FLOAT_SIGN              \+|-
FLOAT_DIG            	[0-9]+
FLOAT_SUFFIX      	f|l|F|L

%%

auto				{ return token(AUTO);}

break				{ return token(BREAK); }

case				{ return token(CASE); } 

char				{ return token(CHAR); }

const				{ return token(CONST); }

continue			{ return token(CONTINUE); }

default				{ return token(DEFAULT); }

do				{ return token(DO); }

double				{ return token(DOUBLE); }

else				{ return token(ELSE); }

enum				{ return token(ENUM); }

extern				{ return token(EXTERN); }

for				{ return  token(FOR); }

goto				{ return token(GOTO); }
	
if				{ return token(IF); }

register			{ return token(REGISTER); }

return				{ return token(RETURN); }

short				{ return token(SHORT); }

sizeof				{ return token(SIZEOF); }

static				{ return token(STATIC); }
	
struct				{ return token(STRUCT); }

switch				{ return token(SWITCH); }

typedef				{ return token(TYPEDEF); }

union				{ return token(UNION); }

void				{ return token(VOID); }

volatile			{ return token(VOLATILE); }

while				{ return token(WHILE); }

signed				{ return token(SIGNED); }

unsigned			{ return token(UNSIGNED); }

float				{ return token(FLOAT); }

"signed char"			{ return token(SIGNED_CHAR); }

"unsigned short"		{ return token(UNSIGNED_SHORT); }

int				{ return token(INT); }

long				{ return token(LONG); }

"unsigned int"			{ return token(UNSIGNED_INT); }

"unsigned long"			{ return token(UNSIGNED_LONG); }

"long double"			{ return token(LONG_DOUBLE); }

"long long"			{ return token(LONG_LONG); }
	
"unsigned long long"		{ return token(UNSIGNED_LONG_LONG); }

"intmax_t"			{ return token(INTMAX_T); }

"uintmax_t"			{ return token(UINTMAX_T); }

[\(]				{ return token(LROUND); }

[\)]				{ return token(RROUND); }

[\[]				{ return token(LSQUARE); }

[\]]				{ return token(RSQUARE); /* \ is ok here */ }
	
[\{]				{ return token(LCURLY); }

[\}]				{ return token(RCURLY); }

[\.]				{ return token(DOT_OP); }

[\-][\>]			{ return token(POINTER_OP); }

\!				{ return token(LOGICAL_NOT_OP); }

\~				{ return token(BITWISE_NOT_OP); }

\+				{ return token(PLUS_OP); }

\-				{ return token(MINUS_OP); }

\+\+				{ return token(INC_OP); }

\-\-				{ return token(DEC_OP); }

\&				{ return token(AND); }

\*				{ return token(MULT); }

\/				{ return token(DIV); }

\%				{ return token(MODULUS_OP); }

\<\<				{ return token(SHIFT_LEFT_OP); }

\>\>				{ return token(SHIFT_RIGHT_OP); }
 
\<				{ return token(LT); }

\>				{ return token(GT); }

\<\=				{ return token(LE); }

\>\=				{ return token(GE); }

\=\=				{ return token(EQ); }

\!\=				{ return token(NOT_EQ); }

[\^]				{ return token(XOR); /* \ is ok here */} 

[\|]				{ return token(OR); }

\&\&				{ return token(LOG_AND); }

\|\|				{ return token(LOG_OR); }

\?\:				{ return token(COND_OP); }

\=				{ return token(ASSIGN_OP); }

\+\=				{ return token(SHRT_ASSIGNPLUS); }

\-\=				{ return token(SHRT_ASSIGNMINUS); }

\*\=				{ return token(SHRT_ASSIGNMULT); }

\%\=				{ return token(SHRT_ASSIGNMOD); }

\&\=				{ return token(SHRT_ASSIGNAND); }

\|\=				{ return token(SHRT_ASSIGNOR); }

\^\=				{ return token(SHRT_ASSIGNXOR); }

\<\<\=				{ return token(SHRT_ASSIGNLSHIFT); }

\>\>\=				{ return token(SHRT_ASSIGNRSHIFT); }

[,]				{ return token(COMMA); }

[\*][a-zA-Z]			{ return token(POINTER); }

0[xX][a-fA-F0-9]+(([uU][lL])?)	{ return token(HEX); } //suffix included

0[xX][a-fA-F0-9]+(([lL][uU])?)	{ return token(HEX); } //suffix included

0[1-7]+(([uU][lL])?)		{ return token(OCTAL); } //suffix included

0[1-7]+(([lL][uU])?)		{ return token(OCTAL); } //suffix included

{FLOAT_LIT}			{ return token(FLOAT_LITERAL); }

[-]?[0-9]+(([uU][lL])?)		{ return token(int_NUM); } //suffix included

[-]?[0-9]+(([lL][uU])?)		{ return token(int_NUM); } //suffix included

[ \t]+				{ ; }

[\n]+				{ ; }

[\;]				{ return token(SEMICOLON); }

[#][^\n\#]*[\n]			{ return token(PREPROCESSOR); }

[\/][\/][^\n]*[\n]		{ ; }

["][^\n\"]*["]			{ return token(STRING_LITERAL); }

\.\.\.				{ return token(ELLIPSIS); }

[A-Za-z_][A-Za-z_0-9]*		{ return token(IDENTIFIER); }

.				{ yyerror(yytext); } 


%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)
{
  	fprintf (stderr, "Error: %s\n", s); /* s is the text that wasn't matched */
  	exit(1);
}


int token(int T) {
	
	if( T == IDENTIFIER || T == STRING_LITERAL || T == HEX || T == OCTAL || T == FLOAT_LITERAL || T == int_NUM) {

		return vtoken(T);

	}

	else{
		yylval.text = new std::string(yytext);
		return T;
	}
}

int vtoken(int T){
	
	if( T == IDENTIFIER ) {

        	yylval.text = new std::string(yytext);
	}

	else if( T == HEX || T == OCTAL || T == FLOAT_LITERAL || T == int_NUM ) {

        	yylval.text = new std::string(yytext);

	}		

	else if( T == STRING_LITERAL) {

		std::string temp = yytext;
		std::string temp2;
	    	temp[temp.find_first_of('"')] = 0;
	    	temp[temp.find_last_of('"')] = 0;
		for ( unsigned i = 0; i < temp.size(); ++i){
			if(temp[i] != 0) {
				temp2 += temp[i];
			}
		}
		yylval.text = new std::string(temp2);
	}
	return T;
}	
