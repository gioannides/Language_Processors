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


    while(1){
            TokenType type=(TokenType)yylex();

	if( type == 0) {
	
		break;
	
	}

	else if( type == 1) {

		string temp;
		temp = *(yylval.Type);
		Operator.push_back(temp);
		delete yylval.Type;
		yylval.Type = NULL;
		ss << "{'Text':'" << temp << "','Class':'Operator'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";

	}

	else if( type == 2) {

		string temp;
		temp = *(yylval.Type);
		Operator.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Operator'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 3) {

		string temp;
		temp = *(yylval.Type);
		Operator.push_back(temp);
		delete yylval.Type;
		cout << "{'Text':'" << temp << "','Class':'Operator'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 4) {

		string temp;
		temp = *(yylval.Type);
		Operator.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Operator'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 5) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 6) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;

	}

	else if( type == 7) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 8) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 9) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 10) {

		string temp;
		temp = *(yylval.Type);
		Constant.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Constant'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 11) {					//IDENTIFIERS

		string temp;
		temp = *(yylval.Type);
		Identifier.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Identifier'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 12) {

		string temp;
		temp = *(yylval.Type);
		StringLiteral.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'StringLiteral'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type == 13) {

		string temp;
		temp = *(yylval.Type);
		StringLiteral.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'StringLiteral'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	
	else if ( type >= 14 && type <= 55) {			//KEYWORDS
		
		string temp;
		temp = *(yylval.Type);
		Keyword.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Keyword'}" << endl; 
       		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

	else if( type >= 56 && type <= 96) {			//OPERATORS
		
		string temp;
		temp = *(yylval.Type);
		Operator.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Operator'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";	
		yylval.Type = NULL;
	}

	else if ( type == 97 ) {				//STRING_LITERALS

		string temp;
		temp = *(yylval.Type);
		StringLiteral.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'StringLiteral'}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
	}

    	else{
		string temp;
		temp = *(yylval.Type);
		StringLiteral.push_back(temp);
		delete yylval.Type;
		ss << "{'Text':'" << temp << "','Class':'Invalid'," << Invalid << "}" << endl; 
		temp = ss.str();
		cout << temp;
		ss.clear();
		temp = "";
		yylval.Type = NULL;
        	assert(0); // There are only n token types.
        	return 1;

    	}
    }

    return 0;
}
