#!/bin/bash

cd ./compiler-src
flex lexer.lex
bison parser.y
bison -d parser.y
gcc lex.yy.c parser.tab.c -o compiler
mv compiler.exe ../compiler.exe
cd ..