#!/bin/bash

cd ./compiler-src
flex lexer.lex
bison parser.y
bison -d parser.y
gcc parser.tab.c lex.yy.c semantic.c -o compiler
mv compiler.exe ../compiler.exe
cd ..

python ./app.py