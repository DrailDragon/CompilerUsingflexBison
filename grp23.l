%{
#include "y.tab.h"
#include<iostream>
using namespace std;
int lineNum=1;
%}
/***Regular Definitions**/
delim [\t ]
ws    {delim}+
letter [A-Za-z_]
digit  [0-9]
id	{letter}({letter}|{digit})*
number	{digit}+(\.{digit}+)?(E[+-]?{digit}+)?
%%
";" { return ';';}
"-"  {  return '-';}
"*"  {  return '*';}
"+"  { return '+';}
"&" {  return '&';}
"|"  { return '|';}
"==" {  return EQ;}
"<=" { return LE;}
"!=" { return NE;}
">>" { return OP_IN;}
"<"  { return '<';}
">"  { return '>';}
"="		{  return '=';}
","		{  return ',';}
\n	{ lineNum++;}
" "
ws  {  return WHITESPACE;}
"(" {return '(';}
")"	{ return ')';}
"{" { return '{';}
"}"	{return '}';}
"if" 		{  return (IF);}
"else" 	{  return (ELSE);}
"while"	{  return (WHILE);}
"do"       {  return (DO);}
"return"  {   return RETURN;}
"break"		{  return BREAK;}
"continue" {  return CONTINUE;}
"for" 		{ return FOR;}
"switch"	{  return SWITCH;}
"default"	{  return DEFAULT;}
"case"	{  return CASE;}
{digit}+ { yylval.intv=atoi(yytext); return INT_CONST;}
\"(\\.|[^"])*\" { yylval.strv = strdup(yytext);   return STR_LITERAL;}

"bool" {   return BOOL;}
"true" {  return TRUEV;}
"false" {return FALSEV;}
"const" {  return CONST;}
"void" {  return VOID;}
"int" {  return INT;}
"signed" {  return SIGNED;}
"unsigned" {  return UNSIGNED;}
"print_int"  { return PRINT_INT;}
"print_str"  {  return PRINT_STR;}
"print_var"  {  return PRINT_VAR;}
"scan"	{  return SCAN;}
"call" {return CALL;}
{id} {  yylval.strv= strdup(yytext); return ID;}
.	{}
%% 
int yywrap(){
	return 1;
}

