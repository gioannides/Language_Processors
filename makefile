CPPFLAGS += -W -Wall -g 

# This avoids error: ‘fileno’ was not declared in this scope
CPPFLAGS += -std=c++0x

# Avoid warnings about yyunput not used
CPPFLAGS += -Wno-unused-function

all : C

C_lexer.yy.cpp : C_lexer.flex
	flex -o C_lexer.yy.cpp  C_lexer.flex

C : C_lexer.yy.o C_main.o
	g++ $(CPPFLAGS) -o C  C_lexer.yy.o C_main.o

clean :
	-rm C C.exe
	-rm *.yy.cpp
	-rm test/out/*
