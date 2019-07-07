<div align="center">
<img src="C-language.jpg">
 <br>
</div>


Overview
========

The code can be found  <a href="https://github.com/gioannides/Language_Processors">here</a> 
-------------------------------------------------------------------------------------------

This code contains two components:

- [*C-translator*]: The compiler is able to translate a sub-set of C
  into equivalent Python. This allows demonstration of lexing and
  parsing functionality.

- [*C-compiler*]: This is a compiler from C to MIPS assembly.

  
In all cases, the source language is pre-processed C89. The target environment
is Ubuntu 16.04, or equivalently an Ubuntu 16.04 VM. If there is any conflict,
then the VM has precedence. Make sure you have installed <b>Bison</b>, <b>Flex</b> and <b>qemu-mips</b>
on your local machine otherwise you cannot run the compiler.


A compiler for the C language
====================================

The program reads C source code from a file, and writes
MIPS assembly to another file.

Program build and execution
---------------------------

The program is built using the command:

    make bin/c_compiler

The compilation function is invoked using the flag `-S`, with
the source file and output file specified on the command line:

    bin/c_compiler -S [source-file.c] -o [dest-file.s]
    

Input Format
------------

The input format is pre-processed C89.

Output Format
-------------

The output format is MIPS1 assembly code.

It is possible to assemble and link this code
against a C run-time, and have it execute correctly
on a MIPS processor as emulated by `qemu-mips`.

C Translator
============

The compiler supports a translation mode, which translates
a sub-set of pre-processed C89 into Python.

Program build and execution
---------------------------

The program can be built using the command:

    make bin/c_compiler

The translator function is invoked using the flag `--translate`, with
the source file and output file specified on the command line:

    bin/c_compiler --translate [source-file.c] -o [dest-file.py]
    

Input format
------------

The input file will be pre-processed [ANSI C](https://en.wikipedia.org/wiki/ANSI_C),
also called C90 or C89. It's what's generally thought of as "classic" or "normal" C,
but not the _really_ old one without function prototypes. C90 is still often used in embedded systems, and pretty much the
entire linux kernel is in C90.


The test inputs will is a set of files of increasing complexity and
variety. The initial files will contain a small number of basic tokens,
then the lexicon will be increased, and finally Pre-Processor directives
(see next section) will be included. All files will be [well-formed](https://en.wikipedia.org/wiki/Well-formedness).

Output format
-------------

The output format will be a Python 3 equivalent to the input C.

The full set of patterns required is described [here].

As an example, we would translate the input program:

```
int f(int x)
{
  return x*x;
}
```
into the python:
```
def f(x):
    return x*x
```

Or this program:
```
int f(int x)
{
  if(x>1){
    return x*f(x-1);
  }else{
    return x;
  }
}
```
turns into this:
```
def f(x):
   if x>1:
       return x*f(x-1)
   else:
       return x
```


Features:
=========

- Integer Arithmetic
- Floating Point Arithemetic
- Arrays
- All of the Statements (IfElse,While,For,Switch, etc)
- Pointers
- Enumerations
- TypeDef
- Function Calls
- Local & Global variables
- Type Casting
- sizeof
- All Expressions


The doc/notes provides some additional information about this coursework, other than the management files.

Outcome:
--------
Awarded the best compiler of EIE year 2 award. 


Python translator - 100%
C-compiler - 97.39%
Test cases - 90%
