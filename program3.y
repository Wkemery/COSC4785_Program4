/*
 * program3.y
 * Author: Wyatt Emery
 * Date: OCT 6, 2017
 * COSC 4785, Homework3
 */

%{


#include <iostream>
#include <FlexLexer.h>
#include "Node.h"
#include "Lexeme.h"

using namespace std;

extern vector<Node*> forest;
extern yyFlexLexer scanner;

#define yylex() scanner.yylex()

// need the function prototype for the parser.

void yyerror(const char *);

%}

%union {
  Node* ttype;
  Lexeme* token;

}

/* In many of the code blocks when matching productions, I have various to see 
 * if I'm building a "dirty" node tree. There are a few instances where I 
 * $$ = 0; I do this when I cannot create a full node based off of the 
 * information at hand. I've kept track of those instances and will have more 
 * checks for that in the future.
 */



%token<token> CLASS THIS IF ELSE WHILE RETURN PRINT READ VOID NEW NULLKEYWORD 

%token<token> INT ASSIGNOP DOTOP COMMA LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE

%token<token>PLUS MINUS NOT

%token<token>DOUBEQ NOTEQ LESSEQ GREATEQ LESS GREAT

%token<token>TIMES DIVIDE MOD DOUBAND DOUBBAR

%token<token>IDENTIFIER SEMICO NUM

%type<ttype> expression name multibracks unaryop relationop productop 
%type<ttype> sumop arglist optExprBrack newexpression exp vardec statement
%type<ttype> conditionalstatement block vardecr statementr

%destructor {delete($$);} CLASS THIS IF ELSE WHILE RETURN PRINT READ VOID NEW 
%destructor {delete($$);} NULLKEYWORD INT ASSIGNOP DOTOP COMMA LPAREN RPAREN 
%destructor {delete($$);} LBRACK RBRACK LBRACE RBRACE PLUS MINUS NOT DOUBEQ 
%destructor {delete($$);} NOTEQ LESSEQ GREATEQ LESS GREAT TIMES DIVIDE MOD 
%destructor {delete($$);} DOUBAND DOUBBAR IDENTIFIER SEMICO NUM

%destructor {delete($$);} expression name multibracks unaryop 
%destructor {delete($$);} relationop productop sumop arglist optExprBrack 
%destructor {delete($$);} newexpression exp conditionalstatement statement
%destructor {delete($$);} block vardecr statementr

%precedence IFEL
%precedence ELSE
%precedence NAME
/* %precedence SEMICO */
/* %precedence EXP */
%left DOUBEQ NOTEQ LESSEQ GREATEQ LESS GREAT RE
%left PLUS MINUS DOUBBAR BIN
%left TIMES DIVIDE MOD DOUBAND PRO
%precedence NEG
/* %precedence OPTEXP */
%precedence LBRACK
%precedence VARD
%precedence IDENTIFIER
/* %precedence LPAREN */




%% 
input:  %empty
        | input exp { 
          if($2!=0) 
          {
            if(!$2->getErr()) forest.push_back($2);
            else delete $2;
          }
        }
        | error{
          cerr << "Got no idea Around " << yylval.token->line << ":" 
          << yylval.token->column <<endl << endl; 
          yyclearin;
          yyerrok;
          
        }
;

exp: statement {$$ = $1;}
;

statement: name ASSIGNOP expression SEMICO {
                $$ = new Statement($1, $3, STMNTNAMEEXP);
                delete $2; delete $4;
                }
            | name LPAREN arglist RPAREN SEMICO {
                  $$ = new Statement($1, $3, STMNTNAMEARGL);
                  delete $2; delete $4; delete $5;
                  }
            | PRINT LPAREN arglist RPAREN SEMICO {
                  $$ = new Statement($3, STMNTPRNTARGL);
                  delete $1; delete $2; delete $4; delete $5;
                  }
            | WHILE LPAREN expression RPAREN statement {
                  $$ = new Statement($3, $5, STMNTWHILE);
                  delete $1; delete $2; delete $4;
                  }
            | RETURN expression SEMICO{
                  $$ = new Statement($2, SMTNTRETURN);
                  delete $1; delete $3;
                  }
            | RETURN SEMICO {
                  $$ = new Statement(SMTNTRETURN);
                  delete $1; delete $2;
                  }
            | conditionalstatement {
                  $$ = new Statement($1, STMNTCOND);
                  }
            | block {
                  $$ = new Statement($1, STMNTBLOCK);
                  }
;

block:  LBRACE vardecr RBRACE{
              $$ = new Block($2, BLOCKVARDEC);
              delete $1; delete $3;
              }
        | LBRACE statementr RBRACE {
              $$ = new Block($2, BLOCKSTMNT);
              delete $1; delete $3;
              }
        | LBRACE vardecr statementr RBRACE{
              $$ = new Block($2, $3, BLOCKVARSTMNT);
              delete $1; delete $4;
              }
        | LBRACE RBRACE {
              $$ = new Block(BLOCKEMPTY);
              delete $1; delete $2;
              }
        
;
vardecr: vardec %prec VARD { $$ = $1; }
          | vardec vardecr {
/*                 $$ = new VarDecR($1, $2); */
                    $$ = new RecursiveNode($1, $2, RECVARDEC);
                }
;
statementr: statement { $$ = $1; }
            | statement statementr {
/*                   $$ = new StatementR($1, $2); */
                    $$ = new RecursiveNode($1, $2, RECSTMNT);
                  }
;


conditionalstatement: IF LPAREN expression RPAREN statement %prec IFEL{
                            $$ = new CondStatement($3, $5, CONDSTMNT);
                            delete $1; delete $2; delete $4;
                            }
                      | IF LPAREN expression RPAREN statement ELSE statement {
                            $$ = new CondStatement($3, $5, $7, CONDSTMNTELSE);
                            delete $1; delete $2; delete $4; delete $6;
                            }
;

vardec: IDENTIFIER IDENTIFIER SEMICO {
            $$ = new VarDec($1->value, $2->value);
            delete $1; delete $2; delete $3;
            }
      | IDENTIFIER error SEMICO {
            $$ = new ErrNode();
            cerr << "-> before ; at " << $3->line << ":" << $3->column << endl 
            << endl;
            yyerrok;
            delete $1; delete $3;
            }
      | IDENTIFIER multibracks IDENTIFIER SEMICO {
            $$ = new VarDec($1->value, $3->value, $2);
            delete $1; delete $3; delete $4;
            }
      | INT IDENTIFIER SEMICO {
            $$ = new VarDec("int", $2->value);
            delete $1; delete $2; delete $3;
            }
      | INT error SEMICO {
            $$ = new ErrNode();
            cerr << " -> before ; at " << $3->line << ":" << $3->column << endl 
            << endl;
            yyerrok;
            delete $1; delete $3;
            }
      | INT multibracks IDENTIFIER SEMICO {
            $$ = new VarDec("int", $3->value, $2);
            delete $1; delete $3; delete $4;
            }
      | IDENTIFIER IDENTIFIER error {
            $$ = new ErrNode();
            cerr << "Expected Semicolon At "<< $2->line 
            << ":" << $2->column+$2->value.length() 
            << endl << endl;
            yyerrok;
            delete $1; delete $2;
              }
      | INT IDENTIFIER error {
          $$ = new ErrNode();
          cerr << "Expected Semicolon At "<< $2->line << ":" 
          << $2->column+$2->value.length() <<endl << endl;
          yyerrok;
          delete $1; delete $2;
          }
;
expression: NUM { 
                $$ = new Expression($1->value, EXPNUM);
                delete $1;
}
            | NULLKEYWORD { 
                $$ = new Expression("null", EXPNULL); 
                delete $1;
            }
            | READ LPAREN RPAREN { 
                $$ = new Expression("read", EXPREAD); 
                delete $1; delete $2; delete $3;
            }
            | READ LPAREN error  {
                      $$ = new ErrNode();
                      cerr << "Expected Right Parenthesis At "<< $2->line << ":" 
                      << $2->column <<endl << endl;
                      yyerrok;
                      delete $1; delete $2;
                     }
            | unaryop expression %prec NEG { 
                  $$ = new Expression($1, $2, EXPUNARY); 
                  }
            | unaryop error %prec NEG { 
                      $$ = new ErrNode();
                      cerr << "Expected expression after " << yylval.token->line 
                      << ":" << yylval.token->column << endl << endl;
                      delete $1;
                      yyerrok;
            }
            | expression relationop expression %prec RE{ 
                    $$ = new Expression($1, $2, $3, EXPRELATION);  
                    }
            | expression relationop error %prec RE{ 
                      $$ = new ErrNode();
                      cerr << "Expected expression after " << yylval.token->line 
                      << ":" << yylval.token->column << endl << endl;
                      delete $1; delete $2; 
                      yyerrok;
            }
            | expression productop expression %prec PRO{
                    $$ = new Expression($1, $2, $3, EXPPRODUCT); 
            }
            | expression productop error %prec RE{ 
              $$ = new ErrNode();
              cerr << "Expected expression after " << yylval.token->line 
              << ":" << yylval.token->column << endl << endl;
              delete $1; delete $2;
              yyerrok;
            }
            | expression sumop expression %prec BIN {
                    $$ = new Expression($1, $2, $3, EXPSUMOP); 
            }
            | expression sumop error %prec RE{ 
              $$ = new ErrNode();
              cerr << "Expected expression after " << yylval.token->line 
              << ":" << yylval.token->column << endl << endl;
              delete $1; delete $2;
              yyerrok;
            }
            | LPAREN expression RPAREN { 
                  $$ = new Expression($2, EXPPAREN);
                  delete $1; delete $3;
            }
            | LPAREN expression error { 
                    $$ = new ErrNode();
                    cerr << "Expected Right Parenthesis At "
                    << yylval.token->line << ":" << yylval.token->column 
                    <<endl << endl;
                    delete $1; delete $2;
                    yyerrok;
            }
            | newexpression { 
                            if($1!= 0) $$ = new Expression($1, EXPNEW); 
                            else $$ = 0;
                            }
            | name %prec NAME{$$ = new Expression($1, EXPNAME);
                  }
            | name LPAREN arglist RPAREN {
                  $$ = new Expression($1, $3, EXPNAMEARG);
                  delete $2; delete $4;
            }
            | name LPAREN arglist error {
                    $$ = new ErrNode();
                    cerr << "Expected Right Parenthesis At "
                    << yylval.token->line << ":" << yylval.token->column 
                    <<endl << endl;
                    yyerrok;
                    delete $1; delete $2; delete $3;
            }
            
;
name: THIS { 
            $$ = new Name("this", NAMETHIS); 
            delete $1;
}
      | IDENTIFIER %prec NAME { 
            $$ = new Name($1->value, NAMEID);
            delete $1;
      }
      | name DOTOP IDENTIFIER { 
            $$ = new Name($1, $3->value, NAMEDOTID);
            delete $2; delete $3;
      }
      | name LBRACK expression RBRACK { 
            $$ = new Name($1, $3, NAMEEXP);
            delete $2; delete $4;
      }
      | IDENTIFIER LBRACK expression RBRACK{
        $$ = new Name($3, $1->value, NAMEIDEXP);
        delete $1; delete $2; delete $4;
      }
      | IDENTIFIER LBRACK expression error{
        $$ = new ErrNode();
        cerr << "Expected Right Bracket At " << yylval.token->line << ":" 
        << yylval.token->column << endl << endl;
        delete $1; delete $2; delete $3;
      }
      | name LBRACK expression error { 
            $$ = new ErrNode();
            cerr<< "Expected Right Bracket At " << yylval.token->line << ":"
            << yylval.token->column << endl << endl;
            yyerrok;
            delete $1; delete $2; delete $3;
      }
;
newexpression: NEW IDENTIFIER LPAREN arglist RPAREN {
                    $$ = new NewExpression($2->value, $4, NEWEXPARG);
                    delete $1; delete $2; delete $3; delete $5;
}
              | NEW IDENTIFIER LPAREN arglist error {
                $$ = new ErrNode();
                cerr << "Expected Right Parenthesis At " << yylval.token->line 
                << ":" << yylval.token->column << endl << endl;
                      yyerrok;
                      delete $1; delete $2; delete $3; delete $4;
              }
              | NEW IDENTIFIER optExprBrack {
                if($3 != 0) ((BrackExpression*)$3)->reverse();
                if($3 == 0) $$ = new NewExpression($2->value, $3, 0, NEWEXP);
                else $$ = new NewExpression($2->value, $3, 0, NEWEXPBRACK);
                delete $1; delete $2;
              }
              | NEW IDENTIFIER optExprBrack multibracks {
                if($3 != 0) ((BrackExpression*)$3)->reverse();
                if($3 == 0) $$ = new NewExpression($2->value, $3, $4, NEWEXPMULTI);
                else $$ = new NewExpression($2->value, $3, $4, NEWEXPBRACKMULTI);
                delete $1; delete $2;
              }
              | NEW INT LPAREN arglist RPAREN {
                    $$ = new NewExpression("int", $4, NEWEXPARG);
                    delete $1; delete $2; delete $3; delete $5;
              }
              | NEW INT LPAREN arglist error {
                $$ = new ErrNode();
                cerr << "Expected Right Parenthesis At " << yylval.token->line 
                << ":" << yylval.token->column <<endl << endl;
                      yyerrok;
                      delete $1; delete $2; delete $3; delete $4; 
              }
              | NEW INT optExprBrack {
                    if($3 != 0) ((BrackExpression*)$3)->reverse();
                    if($3 == 0) $$ =  new NewExpression("int", $3, 0,NEWEXP);
                    else $$=  new NewExpression("int", $3, 0,NEWEXPBRACK);
                    delete $1; delete $2;
              }
              | NEW INT optExprBrack multibracks {
                if($3 != 0) ((BrackExpression*)$3)->reverse();
                if($3 == 0) $$=  new NewExpression("int", $3, $4, NEWEXPMULTI);
                else $$ =  new NewExpression("int", $3, $4, NEWEXPBRACKMULTI);
                delete $1; delete $2;
              }
             | NEW error{ 
                  $$ = new ErrNode();
                  cerr << " -> after new at " << $1->line << ":" << $1->column 
                  << endl << endl; 
                  yyerrok;
                  delete $1;
}
                  
;
optExprBrack: %empty {$$ = 0;}
              | optExprBrack LBRACK expression RBRACK {
                    $$ = new BrackExpression($3, $1);
                    delete $2; delete $4;
              }
;

arglist: %empty {$$ = 0;}
          | expression COMMA arglist { 
            $$ = new ArgList($1, $3);
            delete $2;
          }
          | expression {$$ = new ArgList($1, 0);}
;
unaryop:  PLUS {$$ = new UnaryOp("+"); delete $1;}
| MINUS {$$ = new UnaryOp("-"); delete $1;}
| NOT {$$ = new UnaryOp("!"); delete $1;}

;

relationop: DOUBEQ {$$ = new RelationOp("=="); delete $1;}
| NOTEQ {$$ = new RelationOp("!="); delete $1;}
| LESSEQ {$$ = new RelationOp("<="); delete $1;}
| GREATEQ {$$ = new RelationOp(">="); delete $1;}
| LESS {$$ = new RelationOp("<"); delete $1;}
| GREAT {$$ = new RelationOp(">"); delete $1;}
;

productop:  TIMES {$$ = new ProductOp("*"); delete $1;}
| DIVIDE {$$ = new ProductOp("/"); delete $1;}
| MOD {$$ = new ProductOp("%"); delete $1;}
| DOUBAND {$$ = new ProductOp("&&"); delete $1;}
;
sumop:  MINUS {$$ = new SumOp("-"); delete $1;}
| PLUS {$$ = new SumOp("+"); delete $1;}
| DOUBBAR {$$ = new SumOp("||"); delete $1;}
;

multibracks: LBRACK RBRACK {$$ = new Multibracks(); delete $1; delete $2;}
| multibracks LBRACK RBRACK {$$ = new Multibracks($1); delete $3;delete $2;}
;

%%
