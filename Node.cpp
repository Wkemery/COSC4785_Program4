/*
 * Node.cpp
 * Author: Wyatt Emery
 * Date: OCT 6, 2017
 *
 * COSC 4785, Homework3
 *
 */

#include<iostream>
using namespace std;
#include"Node.h"
#include<cstdlib>

Node::Node(string value = "", string type = "", int kind = 0)
:_value(value), _type(type), _kind(kind), _err(false)
{}
Node::~Node()
{
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    delete _subNodes[i];
  }
}
void Node::setErr() {
  _err = true;
}
bool Node::getErr() {return _err;}
string Node::getType(void) const
{
  return _type;
}

/******************************************************************************/

ClassDec::ClassDec(string value, Node* node1):Node(value, "ClassDec")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}
void ClassDec::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ClassDec> --> class ID <ClassBody>" << endl;
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
  
  *out << endl;
}

/******************************************************************************/

ClassBody::ClassBody(int kind):Node("", "ClassBody", kind)
{}

ClassBody::ClassBody(Node* node1, int kind):Node("", "ClassBody", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true; 
}

ClassBody::ClassBody(Node* node1, Node* node2, int kind)
:Node("", "ClassBody", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true; 
  
  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true; 
}

ClassBody::ClassBody(Node* node1, Node* node2, Node* node3, int kind)
:Node("", "ClassBody", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true; 
  
  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true; 
  
  _subNodes.push_back(node3);
//   if(node3->getErr()) _err = true; 
}

void ClassBody::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ClassBody> --> {";
  
  switch(_kind)
  {
    case CLASSBODYEMPTY:
    {
      break;
    }
    case CLASSBODYVAR:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<VarDecRecursive>";
      else *out << "<" << _subNodes[0]->getType() << ">";
      break;
    }
    case CLASSBODYVARCON:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<VarDecRecursive> ";
      else *out << "<" << _subNodes[0]->getType() << "> ";
      
      if(_subNodes[1]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[1]->getType()== "RecursiveNode") *out << "<ConstructorDecRecursive>";
      else *out << "<" << _subNodes[1]->getType() << ">";
      
      break;
    }
    case CLASSBODYVARCONMET:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<VarDecRecursive> ";
      else *out << "<" << _subNodes[0]->getType() << "> ";
      
      if(_subNodes[1]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[1]->getType()== "RecursiveNode") *out << "<ConstructorDecRecursive> ";
      else *out << "<" << _subNodes[1]->getType() << "> ";
      
      if(_subNodes[2]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[2]->getType()== "RecursiveNode") *out << "<MethodDecRecursive>";
      else *out << "<" << _subNodes[2]->getType() << ">";
      
      break;
    }
    case CLASSBODYCONMET:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<ConstructorDecRecursive> ";
      else *out << "<" << _subNodes[0]->getType() << "> ";
      
      if(_subNodes[1]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[1]->getType()== "RecursiveNode") *out << "<MethodDecRecursive>";
      else *out << "<" << _subNodes[1]->getType() << ">";
      
      break;
    }
    case CLASSBODYMET:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<MethodDecRecursive>";
      else *out << "<" << _subNodes[0]->getType() << ">";
      break;
    }
    case CLASSBODYCON:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<ConstructorDecRecursive>";
      else *out << "<" << _subNodes[0]->getType() << ">";
      break;
    }
    case CLASSBODYVARMET:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[0]->getType()== "RecursiveNode") *out << "<VarDecRecursive>";
      else *out << "<" << _subNodes[0]->getType() << "> ";
      
      if(_subNodes[1]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[1]->getType()== "RecursiveNode") *out << "<MethodDecRecursive>";
      else *out << "<" << _subNodes[1]->getType() << ">";
      
      break;
    }
    default:
    {
      cerr << "FATAL ERROR ClassBody" << endl;
      exit(1);
    }
  }
  
  *out << "}" << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/

Statement::Statement(Node* node1, Node* node2, int kind)
:Node("", "Statement", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
  
  if(node2 != 0) //node2 can be an Arglist which can be empty.
  {
    _subNodes.push_back(node2);
    if(node2->getErr()) _err = true;
  }
}
Statement::Statement(Node* node1, int kind):Node("", "Statement", kind)
{
  if(node1 != 0) //node 1 can be an Arglist which can be empty
  {
    _subNodes.push_back(node1);
    if(node1->getErr()) _err = true;
  }
}

Statement::Statement(int kind):Node("", "Statement", kind)
{}

void Statement::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Statement> --> ";
  switch(_kind)
  {
    case STMNTNAMEEXP:
    {
      *out << "<Name> = <Expression> ;";
      break;
    }
    case STMNTNAMEARGL:
    {
      *out << "<Name> ";
      if(_subNodes.size() == 2) *out << "<Name> (<ArgList>) ;";
      else *out << "() ;";
      break;
    }
    case STMNTPRNTARGL:
    {
      *out << "print ";
      if(_subNodes.size() == 1 ) *out << "(<ArgList>) ;";
      else *out << "() ;";
      break;
    }
    case STMNTWHILE:
    {
      *out << "while (<Expression>) <Statement> ";
      break;
    }
    case SMTNTRETURN:
    {
      *out << "return ";
      if(_subNodes.size() == 1) *out << "<Expression> ";
      *out << ";";
      break;
    }
    case STMNTCOND:
    {
      *out << "<ConditionalStatement>";
      break;
    }
    case STMNTBLOCK:
    {
      *out << "<Block>";
      break;
    }
    case STMNTVARDEC:
    {
      *out << "<VarDec>";
      break;
    }
    case STMNTSEMI:
    {
      *out << ";";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR!! Statement" << endl;
      exit(1);
    }
  }

    *out << endl;
    for(unsigned int i = 0; i < _subNodes.size(); i++)
    {
      _subNodes[i]->print(out);
    }
    
    *out << endl << endl;
    
}
/******************************************************************************/
/* Will not discount an entire block due to error value of its children */
Block::Block(int kind):Node("", "Block", kind)
{}

Block::Block(Node* node1, int kind):Node("", "Block", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;
}

Block::Block(Node* node1, Node* node2, int kind):Node("", "Block", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;

  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true;
}

void Block::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Block> --> {";
  switch(_kind)
  {
    case BLOCKVARDEC:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[0]->getType()== "RecursiveNode") 
        *out << "<VarDecRecursive>";
      else *out << " <" << _subNodes[0]->getType() << ">";
      break;
    }
    case BLOCKSTMNT:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[0]->getType()== "RecursiveNode") 
        *out << "<StatementRecursive>";
      else 
      {
        if(_subNodes[0]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[0]->getType() << ">";
      }
      break;
    }
    case BLOCKVARSTMNT:
    {
      if(_subNodes[0]->getErr()) *out << "<ErrNode> ";
      else if(_subNodes[0]->getType()== "RecursiveNode") 
        *out << "<VarDecRecursive>";
      else 
      {
        if(_subNodes[0]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[0]->getType() << "> ";
      }
      
      if(_subNodes[1]->getErr()) *out << "<ErrNode>";
      else if(_subNodes[1]->getType()== "RecursiveNode") 
        *out << "<StatementRecursive>";
      else 
      {
        if(_subNodes[1]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[1]->getType() << ">";
      }
      
      break;
    }
    case BLOCKEMPTY:
    {
      break;
    }
    default:
    {
      cerr << "FATAL ERROR Block" <<endl;
      exit(1);
    }
  }
  
  *out << "}" << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/
/*Don't want to discount entire RecursiveNode tree just because one node is bad, 
 * but We do want an entire Recursive node to be bad if both of its children are mitakes*/
RecursiveNode::RecursiveNode(Node* node1, Node* node2, int kind)
:Node("", "RecursiveNode", kind)
{
  _subNodes.push_back(node1);
  _subNodes.push_back(node2);
  
  if(node1->getErr() && node2->getErr()) _err = true;
}

void RecursiveNode::print(ostream* out)
{
  if(_err) return;
  
  switch(_kind)
  {
    case RECVARDEC:
    {
      *out << "<VarDecRecursive> --> ";
//       if(_subNodes.size() == 2 )
//     {
      if(_subNodes[0]->getType() == "RecursiveNode")
        *out << "<VarDecRecursive> ";
      else *out << "<" << _subNodes[0]->getType() << ">";
      *out << " <" << _subNodes[1]->getType() << ">";
//     }
//       else *out << "<VarDec>";
      break;
    }
    case RECSTMNT:
    {
      *out << "<StatementRecursive> --> ";
//       if(_subNodes.size() == 2 ) 
//       {
        if(_subNodes[0]->getType() == "RecursiveNode") 
          *out << "<StatementRecursive> ";
        else 
        {
          if(_subNodes[0]->getErr()) *out << "<ErrNode>";
          else *out << "<" <<  _subNodes[0]->getType() << "> ";
        }
        
        if(_subNodes[1]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[1]->getType() << ">";
//       }
//       else *out << "<Statement>";
      break;
    }
    case RECCONDEC:
    {
      *out << "<ConstructorDecRecursive> --> ";
//       if(_subNodes.size() == 2 ) 
//       {
        if(_subNodes[0]->getType() == "RecursiveNode") 
          *out << "<ConstructorDecRecursive> ";
        else 
        {
          if(_subNodes[0]->getErr()) *out << "<ErrNode>";
          else *out << "<" <<  _subNodes[0]->getType() << "> ";
        }
        
        if(_subNodes[1]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[1]->getType() << ">";
//       }
//       else *out << "<ConstructorDec>";
      break;
    }
    case RECMETDEC:
    {
      *out << "<MethodDecRecursive> --> ";
//       if(_subNodes.size() == 2 ) 
//       {
        if(_subNodes[0]->getType() == "RecursiveNode") 
          *out << "<MethodDecRecursive> ";
        else 
        {
          if(_subNodes[0]->getErr()) *out << "<ErrNode>";
          else *out << "<" <<  _subNodes[0]->getType() << "> ";
        }
        
        if(_subNodes[1]->getErr()) *out << "<ErrNode>";
        else *out << "<" <<  _subNodes[1]->getType() << ">";
//       }
//       else *out << "<MethodDec>";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR RecursiveNode" << endl;
      exit(1);
    }
  }
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
  *out << endl;
  
}
/******************************************************************************/

CondStatement::CondStatement(Node* node1, Node* node2, int kind)
:Node("", "CondStatement", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
  if(node2->getErr()) _err = true;
}

CondStatement::CondStatement(Node* node1, Node* node2, Node* node3, int kind)
:Node("", "CondStatement", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
  if(node2->getErr()) _err = true;
  
  _subNodes.push_back(node3);
  if(node3->getErr()) _err = true;
}

void CondStatement::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ConditionalStatement> --> ";
  switch(_kind)
  {
    case CONDSTMNT:
    {
      *out << "if (<Expression>) <Statement>";
      break;
    }
    case CONDSTMNTELSE:
    {
      *out << "if (<Expression>) <Statement> else <Statement>";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR!! CondStatement" << endl;
      exit(1);
    }
  }
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}

/******************************************************************************/
Name::Name(string value, int kind):Node(value, "Name", kind)
{}
Name::Name(Node* name, string value, int kind):Node(value, "Name", kind)
{
  _subNodes.push_back(name);
  if(name->getErr()) _err = true;
  
}

Name::Name(Node* name, Node* expression, int kind):Node("", "Name", kind)
{
  _subNodes.push_back(name);
  if(name->getErr()) _err = true;
  
  _subNodes.push_back(expression);
  if(expression->getErr()) _err = true;
  
}

void Name::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Name> --> ";
  switch(_kind)
  {  
    case NAMETHIS:
    {
      *out << _value;
      break;
    }
    case NAMEID:
    {
      *out << _value;
      break;
    }
    case NAMEDOTID:
    {
      *out << "<Name>." << _value;
      break;
    }
    case NAMEEXP:
    {
      *out << "<Name> [<Expression>]";
      break;
    }
    case NAMEIDEXP:
    {
      *out << _value << " [<Expression>]";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR!! NAME" << endl;
      exit(1);
    }
  }
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
  
}
/******************************************************************************/

Expression::Expression(Node* next, int kind):Node("", "Expression", kind)
{
  _subNodes.push_back(next);
  if(next->getErr()) _err = true;
  
}

Expression::Expression(string value, int kind):Node(value, "Expression", kind)
{}

Expression::Expression(Node* unaryop, Node* expression, int kind)
:Node("", "Expression", kind)
{
  _subNodes.push_back(unaryop);
  if(unaryop->getErr()) _err = true;
  
//   if(expression != 0 ) 
//   {
    _subNodes.push_back(expression);
    if(expression->getErr()) _err = true;
//   }
  
}

Expression::Expression(Node* expression1, Node* op, Node* expression2, int kind)
:Node("", "Expression", kind)
{
//   if (expression1 != 0)
//   {
    _subNodes.push_back(expression1);
    if(expression1->getErr()) _err = true;
//   }
  
  _subNodes.push_back(op);
  if(op->getErr()) _err = true;
  
//   if (expression2 != 0)
//   {
    _subNodes.push_back(expression2);
    if(expression2->getErr()) _err = true;
//   }
  
}
void Expression::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Expression> --> ";
  switch(_kind)
  {
    case EXPNUM:
    {
      *out << _value;
      break;
    }
    case EXPNULL:
    {
      *out << _value;
      break;
    }
    case EXPREAD:
    {
      *out << _value;
      break;
    }
    case EXPUNARY:
    {
      *out << "<UnaryOp> <Expression>";
      break;
    }
    case EXPRELATION:
    {
      *out << "<Expression> <RelationOp> <Expression>";
      break;
    }
    case EXPPRODUCT:
    {
      *out << "<Expression> <ProductOp> <Expression>";
      break;
    }
    case EXPSUMOP:
    {
      *out << "<Expression> <SumOp> <Expression>";
      break;
    }
    case EXPPAREN:
    {
      *out << "(<Expression>)";
      break;
    }
    case EXPNEW:
    {
      *out << "<NewExpression>";
      break;
    }
    case EXPNAME:
    {
      *out << "<Name>";
      break;
    }
    case EXPNAMEARG:
    {
      *out << "<Name>(<ArgList>)";
      break;
    }
    default:
      cerr << "FATAL ERROR!!" << endl;
      exit(1);
  }
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
  
  *out << endl;
}

/******************************************************************************/
BrackExpression::BrackExpression(Node* node1)
:Node("", "BrackExpression")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

BrackExpression::BrackExpression(Node* expression1, Node* expression2)
:Node("", "BrackExpression")
{
  _subNodes.push_back(expression1);
  if(expression1->getErr()) _err = true;

  _subNodes.push_back(expression2); 
  if(expression2->getErr()) _err = true;
  
}
void BrackExpression::reverse()
{
  stack<Node*> expressions;
  if(_subNodes.size() > 0) expressions.push(_subNodes[0]);
  if(_subNodes.size() > 1) ((BrackExpression*)_subNodes[1])->recReverse(expressions);
  if(_subNodes.size() > 0) 
  {
    _subNodes[0] = expressions.top();
    expressions.pop();
  }
  if(_subNodes.size() > 1) ((BrackExpression*)_subNodes[1])->recAdd(expressions);
}

void BrackExpression::recReverse(stack<Node*> & expressions)
{
  expressions.push(_subNodes[0]);
  if(_subNodes.size() > 1) ((BrackExpression*)_subNodes[1])->recReverse(expressions);
}
void BrackExpression::recAdd(stack<Node*> & expressions)
{
  _subNodes[0] = expressions.top();
  expressions.pop();
  if(_subNodes.size() > 1) ((BrackExpression*)_subNodes[1])->recAdd(expressions);
}
void BrackExpression::print(ostream* out)
{
  if(_err) return;
  
  *out << "<BracketedExpression> --> ";
  if(_subNodes.size() > 1) *out << "<Expression> [<BracketedExpression>]";
  else *out << "<Expression>";
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/

OptBracket::OptBracket(Node* expression):Node("", "OptBracket")
{
  if(expression != 0 )
  {
    _subNodes.push_back(expression);
    if(expression->getErr()) _err = true;
  }
  
}
void OptBracket::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ArrayBrackets> --> ";
  if(_subNodes.size() > 0) *out << "<ArrayBrackets>[]";
  else *out << "[]";
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/


ArgList::ArgList(Node* expression1, Node* expression2):Node("", "ArgList")
{
  _subNodes.push_back(expression1);
  if(expression1->getErr()) _err = true;
  
  _subNodes.push_back(expression2); 
  if(expression2->getErr()) _err = true;
}

ArgList::ArgList(Node* node1):Node("", "ArgList")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

void ArgList::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ArgList> --> <Expression>";
  if(_subNodes.size() > 1) *out << " <ArgList>";
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/

ParamList::ParamList(Node* node1, Node* node2) :Node("", "ParamList")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
  if(node2->getErr()) _err = true;
}

ParamList::ParamList(Node* node1) :Node("", "ParamList")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

void ParamList::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ParamList> --> " << " <Param> ";
  if(_subNodes.size() > 1) *out << "<ParamList>";
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}

/******************************************************************************/

Param::Param(Node* node1, string value)
:Node(value, "Param")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}


void Param::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Param> --> " << " <Type> " << _value;
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/

NewExpression::NewExpression(int kind):Node("int", "NewExpression", kind) {}
NewExpression::NewExpression(string value, int kind)
:Node(value, "NewExpression", kind) {}

NewExpression::NewExpression(Node* node1, int kind)
:Node("int", "NewExpression", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

NewExpression::NewExpression(Node* node1, Node* node2, int kind)
:Node("int", "NewExpression", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
  if(node2->getErr()) _err = true;
}

NewExpression::NewExpression(string simpletype, Node* arglist, int kind)
:Node(simpletype, "NewExpression", kind)
{
  _subNodes.push_back(arglist);
  if(arglist->getErr()) _err = true;
  
}

NewExpression::NewExpression(string simpletype, Node* type2, Node* brackexp, int kind)
:Node(simpletype, "NewExpression", kind)
{
  _subNodes.push_back(type2);
  if(type2->getErr()) _err = true;

  _subNodes.push_back(brackexp);
  if(brackexp->getErr()) _err = true;
}

void NewExpression::print(ostream* out)
{
  if(_err) return;
  
  *out << "<NewExpression> --> new " << _value << " ";
  
  switch(_kind)
  {
    case NEWEXPARG:
    {
      *out << "(<ArgList>)";
      break;
    }
    case NEWEXPBRACK:
    {
      *out << "<[Expression]>";
      break;
    }
    case NEWEXPBRACKMULTI:
    {
      *out << "[<BracketedExpression>] <RecursiveBrackets>";
      break;
    }
    case NEWEXPMULTI:
    {
      *out << "<RecursiveBrackets>";
      break;
    }
    case NEWEXPEMPTY:
    {
      break;
    }
    case NEWEXPPAREN:
    {
      *out << "()";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR!!! NewExpression" << endl;
      exit(1);
    }
  }
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
    
  }
}


/******************************************************************************/

ConstructorDec::ConstructorDec(string value, Node* node1, Node* node2, int kind)
:Node(value, "ConstructorDec", kind)
{
    _subNodes.push_back(node1);
//     if(node1->getErr()) _err = true;

  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true;
}

ConstructorDec::ConstructorDec(string value, Node* node1, int kind)
:Node(value, "ConstructorDec", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;
}


void ConstructorDec::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ConstructorDec> --> " << _value;
  
  switch(_kind)
  {
    case CONSTDEC:
    {
      *out << "(<ParamList>)";
      break;
    }
    case CONSTDECEMPTY:
    {
      *out << "()";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR ConstructorDec" << endl;
      exit(1);
    }
  }
  
  if(_subNodes.size() > 0) 
    *out << " <" << _subNodes[_subNodes.size() - 1]->getType() << ">" << endl;
  
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
    
  }
  *out << endl;
}

/******************************************************************************/

MethodDec::MethodDec(Node* node1, string value, Node* node2, Node* node3, int kind)
:Node(value, "MethodDec", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true;
  
  _subNodes.push_back(node3);
//   if(node3->getErr()) _err = true;
}

MethodDec::MethodDec(Node* node1, string value, Node* node2, int kind)
:Node(value, "MethodDec", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true;
}

MethodDec::MethodDec(string value, Node* node1, Node* node2, int kind)
:Node(value, "MethodDec", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;
  
  _subNodes.push_back(node2);
//   if(node2->getErr()) _err = true;
}

MethodDec::MethodDec(string value, Node* node1, int kind)
:Node(value, "MethodDec", kind)
{
  _subNodes.push_back(node1);
//   if(node1->getErr()) _err = true;

}


void MethodDec::print(ostream* out)
{
  if(_err) return;
  
  *out << "<MethodDec> --> "; 
  switch(_kind)
  {
    case METHODDECVOID:
    {
      *out << "void " << _value << " (<ParameterList>) "; 
      break;
    }
    case METHODDECTYPE:
    {
      *out << "<Type> " << _value << " (<ParameterList>) ";
      break;
    }
    case METHODDECTYPEEMPTY:
    {
      *out << "<Type> " << _value << " () ";
      break;
    }
    case METHODDECVOIDEMPTY:
    {
      *out << "void " << _value << " () ";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR MethodDec" << endl;
      exit(1);
    }
  }
  if(_subNodes.size() > 0) 
    *out << " <" << _subNodes[_subNodes.size() - 1]->getType() << ">" << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
    
  }
  *out << endl;
}

/******************************************************************************/

VarDec::VarDec(Node* node1, string value): Node(value, "VarDec")
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

void VarDec::print(ostream* out)
{
  if(_err) return;
  
  *out << "<VarDec> --> <Type> " << _value << " ;" << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
    
  }
}

/******************************************************************************/

Type::Type(string value, int kind):Node(value, "Type", kind)
{}

Type::Type(string value, Node* node1, int kind):Node(value, "Type", kind)
{
  _subNodes.push_back(node1);
  if(node1->getErr()) _err = true;
}

void Type::print(ostream* out)
{
  if(_err) return;
  
  *out << "<Type> --> ";
  switch(_kind)
  {
    case TYPE:
    {
      *out << _value;
      break;
    }
    case TYPEBRACKS:
    {
      *out << _value << " <RecursiveBrackets>"; 
      break;
    }
    default:
    {
      cerr << "FATAL ERROR Type" << endl;
      exit(1);
    }
  }
  
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
    
  }
}
/******************************************************************************/

Multibracks::Multibracks(Node* simpletype):Node("", "Multibracks")
{
  _subNodes.push_back(simpletype);
  if(simpletype->getErr()) _err = true;
}

Multibracks::Multibracks():Node("", "Multibracks")
{}

void Multibracks::print(ostream* out)
{
  if(_err) return;
  
  *out << "<RecursiveBrackets> --> ";
  if(_subNodes.size() > 0) *out << "<RecursiveBrackets>[]";
  else *out << " []";
  *out << endl;
  if(_subNodes.size() > 0) _subNodes[0]->print(out);
}


/******************************************************************************/

UnaryOp::UnaryOp(string value):Node(value, "UnaryOp")
{}
void UnaryOp::print(ostream* out)
{
  if(_err) return;
  
  *out << "<UnaryOp> --> " << _value << endl;
}


/******************************************************************************/

RelationOp::RelationOp(string value):Node(value, "RelationOp")
{}
void RelationOp::print(ostream* out)
{
  if(_err) return;
  
  *out << "<RelationOp> --> " << _value << endl;
}

/******************************************************************************/

ProductOp::ProductOp(string value):Node(value, "ProductOp")
{}
void ProductOp::print(ostream* out)
{
  if(_err) return;
  
  *out << "<ProductOp> --> " << _value << endl;
}

/******************************************************************************/

SumOp::SumOp(string value):Node(value, "SumOp")
{}
void SumOp::print(ostream* out)
{
  if(_err) return;
  
  *out << "<SumOp> --> " << _value << endl;
}

/******************************************************************************/
ErrNode::ErrNode():Node("", "ErrNode")
{
  _err = true;
}
void ErrNode::print(ostream* out)
{
  return;
  cerr << "Tried to print an ErrNdoe!" << endl;
  exit(1);
}
