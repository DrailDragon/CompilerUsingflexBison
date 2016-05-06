all:
	yacc -d -v -t grp23.y
	flex grp23.l
	g++ -std=c++11 -g lex.yy.c y.tab.c y.tab.h -o parser23 -lfl

