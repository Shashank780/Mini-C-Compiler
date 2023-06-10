2019B5A71379H	Sahil Punjabi
2019B5A71392H	Soutik Mohinta
2019B4A70956H	Shashank Pratap Singh
2019B3A71324H	Gaurav kumar 


lexical analyzer:

lex lexer.l
cc lex.yy.c
./a.out input.c

parser:

lex lexicalAnalyzer.l
yacc -d syntaxChecker.y
gcc lex.yy.c y.tab.c -w -g
./a.out input.c

semantic analyzer:

lex lexicalAnalyzer.l
yacc -d syntaxChecker.y
gcc lex.yy.c y.tab.c -w -g
./a.out input.c

intermidiate code generation:

lex lexicalAnalyzer.l
yacc -d syntaxChecker.y
gcc lex.yy.c y.tab.c icg.c -w -g
./a.out input.c