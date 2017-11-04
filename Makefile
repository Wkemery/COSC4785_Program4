##############################
# Makefile
# Author: Wyatt Emery
# Date: NOV 3, 2017
#
# COSC 4785, Homework 4
# 
##############################

CXX=g++
CXXFLAGS=-ggdb -Wall
FLEX=flex++
FLEXFLAGS=--warn
YACC=bison
YACCFLAGS=--report=state -W -d -v

.PHONY: clean tar

program4: program4.cpp program4_lex.cpp program4_bison.c program4_bison.h \
	Lexeme.cpp Node.cpp Lexeme.h Node.h
	${CXX} ${CXXFLAGS} program4.cpp program4_lex.cpp Lexeme.cpp program4_bison.c \
	Node.cpp -o program4

program4_lex.cpp: program4.lpp
	${FLEX} ${FLEXFLAGS} program4.lpp

program4_bison.c: program4.y
	${YACC} ${YACCFLAGS} -o program4_bison.c program4.y


tar: program4.cpp program4.lpp Lexeme.cpp Lexeme.h Makefile
	tar -cf wemery_HW4.tar program4.cpp program4.lpp Lexeme.cpp Lexeme.h \
	program4.y Node.h Node.cpp program4_readme.txt program4.pdf Makefile

clean: 
	/bin/rm -f *.o core.* *.output program4 program4_lex.cpp wemery_HW4.tar \
    program4_bison.c program4_bison.h

