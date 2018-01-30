%option noyywrap
%option yylineno

%{
/* Bring in our declarations for token types and
   the yylval variable. */

#include "C.hpp"
#include <stdlib.h>		
#include <string>
#include <iostream>
#include <regex>
#include <queue>		

void yyerror (char const *s);

int token(int T);
int vtoken(int T);

std::string sourceFile = "";
int sourceLine = 1;
int sourceCol = 1;
int sourceCol_new = 1;

// This is to work around an irritating bug in Flex
extern "C" int fileno(FILE *stream);
%}


%%

\/\*[.]*\*\/		 {return token(COMMENT); }

auto			{ return token(AUTO);}

break			{ return token(BREAK); }

case			{ return token(CASE); } 

char			{ return token(CHAR); }

const			{ return token(CONST); }

continue		{ return token(CONTINUE); }

default			{ return token(DEFAULT); }

do			{ return token(DO); }

double			{return  token(DOUBLE); }

else			{ return token(ELSE); }

enum			{ return token(ENUM); }

extern			{ return token(EXTERN); }

for			{return  token(FOR); }

goto			{ return token(GOTO); }

if			{ return token(IF); }

register		{ return token(REGISTER); }

return			{ return token(RETURN); }

short			{ return token(SHORT); }

sizeof			{ return token(SIZEOF); }

static			{ return token(STATIC); }

struct			{ return token(STRUCT); }

switch			{ return token(SWITCH); }

typedef			{ return token(TYPEDEF); }

union			{ return token(UNION); }

void			{ return token(VOID); }

volatile		{ return token(VOLATILE); }

while			{ return token(WHILE); }

signed			{ return token(SIGNED); }

unsigned		{ return token(UNSIGNED); }

float			{ return token(FLOAT); }

"signed char"		{return token(SIGNED_CHAR); }

"unsigned short"	{return token(UNSIGNED_SHORT); }

int			{ return token(INT); }

long			{ return token(LONG); }

"unsigned int"		{return token(UNSIGNED_INT); }

"unsigned long"		{return token(UNSIGNED_LONG); }

"long double"		{return token(LONG_DOUBLE); }

"long long"		{return token(LONG_LONG); }

"unsigned long long"	{return token(UNSIGNED_LONG_LONG); }

"intmax_t"		{return token(INTMAX_T); }

"uintmax_t"		{return token(UINTMAX_T); }

[\(]			{ return token(LROUND); }

[\)]			{ return token(RROUND); }

[\[]			{ return token(LSQUARE); }

[\]]			{ return token(RSQUARE); /* \ is ok here */ }

[\{]			{ return token(LCURLY); }

[\}]			{ return token(RCURLY); }

[\.]			{ return token(DOT_OP); }

[\-][\>]		{ return token(POINTER_OP); }

\!			{ return token(LOGICAL_NOT_OP); }

\~			{ return token(BITWISE_NOT_OP); }

\+			{ return token(PLUS_OP); }

\-			{ return token(MINUS_OP); }

\+\+			{ return token(INC_OP); }

\-\-			{ return token(DEC_OP); }

\&			{return token(AND); }

\*			{return token(MULT); }

\/			{return token(DIV); }

\%			{return token(MODULUS_OP); }

\<\<			{return token(SHIFT_LEFT_OP); }

\>\>			{return token(SHIFT_RIGHT_OP); }

\<			{return token(LT); }

\>			{return token(GT); }

\<\=			{return token(LE); }

\>\=			{return token(GE); }

\=\=			{return token(EQ); }

\!\=			{return token(NOT_EQ); }

[\^]			{return token(XOR); /* \ is ok here */} 

[\|]			{return token(OR); }

\&\&			{return token(LOG_AND); }

\|\|			{return token(LOG_OR); }

\?\:			{return token(COND_OP); }

\=			{return token(ASSIGN_OP); }

\+\=			{return token(SHRT_ASSIGNPLUS); }

\-\=			{return token(SHRT_ASSIGNMINUS); }

\*\=			{return token(SHRT_ASSIGNMULT); }

\%\=			{return token(SHRT_ASSIGNMOD); }

\&\=			{return token(SHRT_ASSIGNAND); }

\|\=			{return token(SHRT_ASSIGNOR); }

\^\=			{return token(SHRT_ASSIGNXOR); }

\<\<\=			{return token(SHRT_ASSIGNLSHIFT); }

\>\>\=			{return token(SHRT_ASSIGNRSHIFT); }

[,]			{return token(COMMA); }

[\*][a-zA-Z]		{return token(POINTER); }

0[xX][a-fA-F0-9]+	{return token(HEX); }

0[1-7]+			{return token(OCTAL); }

[-]?([0-9]+[.])[0-9]+	{return token(DECIMAL); }

[-]?[0-9]+		{return token(int_NUM); }

[A-Za-z_][A-Za-z_0-9]*	{return token(IDENTIFIER); }

[ \t]+			{return token(WHITESPACE); }

[\n]+			{return token(NEWLINE); }

[\;]			{return token(SEMICOLON); }

[#][^\n\#]*[\n]		{return token(PREPROCESSOR); }

[\/][\/][^\n]*[\n]	{return token(COMMENT); }

["][^\n\"]*["]		{return token(STRING_LITERAL); }

.			{ yyerror(yytext); /* no [] here */ } 


%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)
{
  	fprintf (stderr, "Error: %s\n", s); /* s is the text that wasn't matched */
  	exit(1);
}


void handlePreprocessor()
{
        std::string preprocessor_text(yytext);
        // Pattern for matching preprocessor
        std::regex pattern("#[ ]*([0-9]+)[ ]*\"([^\"]+)\"([ ]*[1-4])*[ ]*\n");
        std::smatch match;
        if (std::regex_search(preprocessor_text, match, pattern)) {
                sourceLine = stoi(match.str(1));
                sourceFile = match.str(2);
        }
        // if the regex pattern doesn't match, then there was no useful information
}


int token(int T) {
	
	sourceCol = sourceCol_new;
	sourceCol_new += yyleng;
	yylval.Type = new std::string(yytext);
	return T;

}

//int vtoken(int T){
//	
//	std::string temp = yytext;
//        yylval.txt = new std::string(temp);

  //      return T;
//}


	
