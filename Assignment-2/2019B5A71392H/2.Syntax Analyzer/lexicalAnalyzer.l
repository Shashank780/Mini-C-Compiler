%{
#include <stdio.h>
#include "y.tab.h"
int lineCount=1;
int nestedCommentCount=0;
int f=0,j=0;
int commentFlag=0;
char *tablePtr;
void addToken(char*);
%}

digit			[0-9]
letter			[a-zA-Z_]
hex			[a-fA-F0-9]
E			[Ee][+-]?{digit}+
FS			(f|F|l|letter)
IS			(u|U|l|letter)*

singlelineComment (\/\/.*)
multilineCommentStart (\/\*)
multilineCommentEnd (\*\/)
a "%d"|"%f"|"%c"|"%s"
%x DETECT_COMMENT

%%


{singlelineComment}      		{ lineCount++; }

{multilineCommentStart}            	{ BEGIN(DETECT_COMMENT);
					  nestedCommentCount++; 
					}
					
<DETECT_COMMENT>{multilineCommentStart} { nestedCommentCount++;
					  if(nestedCommentCount>1)
					  	commentFlag = 1;
					}
					
<DETECT_COMMENT>{multilineCommentEnd} 	{ BEGIN(INITIAL); lineCount++;
						 if(nestedCommentCount>0)
                                			nestedCommentCount--;
                            			if(nestedCommentCount==0)
                            				BEGIN(INITIAL);
                    			}
                    			
<DETECT_COMMENT>\n 		{lineCount++;}
<DETECT_COMMENT>. 		{}

"break"			{  return(BREAK); }
"case"			{  return(CASE); }
"char"			{  return(CHAR); }
"continue"		{  return(CONTINUE); }
"default"		{  return(DEFAULT); }
"else"			{  return(ELSE); }
"float"			{  return(FLOAT); }
"for"			{  return(FOR); }
"if"			{  return(IF); }
"int"			{  return(INT); }
"return"		{  return(RETURN); }
"switch"		{  return(SWITCH); }
"void"			{  return(VOID); }
"while"			{  return(WHILE); }

printf\((\"({a}*|.*)*\"(,[a-zA-Z][a-zA-Z0-9]*)*\))\; {
for(f=0;f<yyleng;f++) {
	if(yytext[f]=='%')
		j++;
	if(yytext[f]==',')
		j--;
}
yyless(6);

if(j==0)
	{addToken(yytext); return(IDENTIFIER);}
else{
	printf("\nLine %d:Invalid Print statement\n\n",lineCount);
	exit(0);
}
	j=0;
}
printf\((({a}*|.*)*(,[a-zA-Z][a-zA-Z0-9]*)*\))\;  {yyless(6);printf("\n\n\t\tInvalid Print statement\n\n");exit(0);}

{letter}({letter}|{digit})*		{  addToken(yytext); return(IDENTIFIER); }
{letter}?\"(\\.|[^\\"])*\"		{  addToken(yytext); return(STRING_LITERAL); }

0[xX]{hex}+{IS}?			{  addToken(yytext); return(CONSTANT); }
0{digit}+{IS}?				{  addToken(yytext); return(CONSTANT); }
{hex}+{IS}?				{  addToken(yytext); return(CONSTANT); }
{letter}?'(\\.|[^\\'])+'		{  addToken(yytext); return(CONSTANT); }
{digit}+{E}{FS}?			{  addToken(yytext); return(CONSTANT); }
{digit}*"."{digit}+({E})?{FS}?		{  addToken(yytext); return(CONSTANT); }
{digit}+"."{digit}*({E})?{FS}?		{  addToken(yytext); return(CONSTANT); }

"&&"			{  return(AND_OP); }
"||"			{  return(OR_OP); }
"<="			{  return(LE_OP); }
">="			{  return(GE_OP); }
"=="			{  return(EQ_OP); }
"!="			{  return(NE_OP); }
";"			{  return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{   return('}'); }
","			{  return(','); }
":"			{  return(':'); }
"="			{  return('='); }
"("			{  return('('); }
")"			{  return(')'); }
("["|"<:")		{  return('['); }
("]"|":>")		{  return(']'); }
"."			{  return('.'); }
"!"			{  return('!'); }
"-"			{  return('-'); }
"+"			{  return('+'); }
"*"			{  return('*'); }
"/"			{  return('/'); }
"%"			{  return('%'); }
"<"			{  return('<'); }
">"			{  return('>'); }

"#include"(.)*"\n"	{ lineCount++; }
"#define"(.)*"\n"	{ lineCount++; }

[ ]			{}
[\t\v\f]		{}
[\n]			{lineCount++;}
.			{ }

%%
yywrap()
{
	return(1);
}

void addToken(char *yytext)
{
  int len = strlen(yytext);
  tablePtr = (char*)malloc((len+1)*sizeof(char));
  strcpy(tablePtr, yytext);
}

