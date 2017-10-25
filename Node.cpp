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
:_value(value), _type(type), _kind(kind)
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

UnaryOp::UnaryOp(string value):Node(value, "UnaryOp")
{}
void UnaryOp::print(ostream* out)
{
  *out << "<UnaryOp> --> " << _value << endl;
}


/******************************************************************************/

RelationOp::RelationOp(string value):Node(value, "RelationOp")
{}
void RelationOp::print(ostream* out)
{
  *out << "<RelationOp> --> " << _value << endl;
}

/******************************************************************************/

ProductOp::ProductOp(string value):Node(value, "ProductOp")
{}
void ProductOp::print(ostream* out)
{
  *out << "<ProductOp> --> " << _value << endl;
}

/******************************************************************************/

SumOp::SumOp(string value):Node(value, "SumOp")
{}
void SumOp::print(ostream* out)
{
  *out << "<SumOp> --> " << _value << endl;
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
      *out << "<VariableDeclaration>";
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
}
/******************************************************************************/
Block::Block(int kind):Node("", "Block", kind)
{}

Block::Block(Node* node1, int kind):Node("", "Block", kind)
{
//   if(node1 != 0) //node1 can be a var dec RecursiveNode which can be empty
//   {
    _subNodes.push_back(node1);
    if(node1->getErr()) _err = true;
//   }
}

// Block::Block(Node* node1, Node* node2, int kind):Node("", "Block", kind)
// {
//   if(node1 != 0) //node1 can be a var dec RecursiveNode which can be empty
//   {
//     _subNodes.push_back(node1);
//     if(node1->getErr()) _err = true;
//   }
//   _subNodes.push_back(node2); //node2 cannot be empty
//   if(node2->getErr()) _err = true;
// }

void Block::print(ostream* out)
{
  *out << "<Block> --> ";
  switch(_kind)
  {
//     case BLOCKVARDEC:
//     {
//       if (_subNodes[0]->getType() == "RecursiveNode")
//         *out << "{ <VarDecRecursive> }";
//       else *out << "{ <VariableDeclaration> }";
//       break;
//     }
    case BLOCKSTMNT:
    {
      if(_subNodes[0]->getType() == "RecursiveNode")
        *out << "{ <StatementRecursive> }";
      else *out << "{ <Statement> }";
      
      break;
    }
//     case BLOCKVARSTMNT:
//     {
//       *out << "{ ";
//       if (_subNodes[0]->getType() == "RecursiveNode")
//         *out << "<VarDecRecursive> ";
//       else *out << "<VariableDeclaration> ";
//       if(_subNodes[1]->getType() == "RecursiveNode")
//         *out << "<StatementRecursive> ";
//       else *out << "<Statement> ";
//       *out << "}";
//       
//       break;
//     }
    case BLOCKEMPTY:
    {
      *out << "{}";
      break;
    }
    default:
    {
      cerr << "FATAL ERROR Block" <<endl;
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

RecursiveNode::RecursiveNode(Node* node1, Node* node2, int kind)
:Node("", "RecursiveNode", kind)
{
  _subNodes.push_back(node1); //node1 cannot be empty
  if(node1->getErr()) _err = true;
//   if(node2 != 0) //node 2 can be a var dec RecursiveNode which can be empty
//   {
    _subNodes.push_back(node2);
    if(node2->getErr()) _err = true;
//   }
}

void RecursiveNode::print(ostream* out)
{
  switch(_kind)
  {
//     case RECVARDEC:
//     {
//       *out << "<VarDecRecursive> --> ";
//       if(_subNodes.size() == 2 )
//     {
//       if(_subNodes[1]->getType() == "VarDec")*out << "<VarDec> <VarDec>";
//       else *out << "<VarDec> <VarDecRecursive>";
//     }
//       else *out << "<VarDec>";
//       break;
//     }
    case RECSTMNT:
    {
      *out << "<StatementRecursive> --> ";
      if(_subNodes.size() == 2 ) 
      {
        if(_subNodes[1]->getType() == "Statement") 
          *out << "<Statement> <Statement>";
        else *out << " <Statement> <StatementRecursive>";
      }
      else *out << "<Statement>";
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
  
  if(expression != 0 ) 
  {
    _subNodes.push_back(expression);
    if(expression->getErr()) _err = true;
  }
  
}

Expression::Expression(Node* expression1, Node* op, Node* expression2, int kind)
:Node("", "Expression", kind)
{
  if (expression1 != 0)
  {
    _subNodes.push_back(expression1);
    if(expression1->getErr()) _err = true;
  }
  
  _subNodes.push_back(op);
  if(op->getErr()) _err = true;
  
  if (expression2 != 0)
  {
    _subNodes.push_back(expression2);
    if(expression2->getErr()) _err = true;
  }
  
}
void Expression::print(ostream* out)
{
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
}

/******************************************************************************/

BrackExpression::BrackExpression(Node* expression1, Node* expression2)
:Node("", "BrackExpression")
{
  if(expression1 != 0)
  {
    _subNodes.push_back(expression1);
    if(expression1->getErr()) _err = true;
  }
  
  if(expression2 != 0)
  {
    _subNodes.push_back(expression2); 
    if(expression2->getErr()) _err = true;
  }
  
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
  
  if(expression2 != 0)
  {
    _subNodes.push_back(expression2); 
    if(expression2->getErr()) _err = true;
  } 
  
}

void ArgList::print(ostream* out)
{
  *out << "<ArgList> --> <Expression>";
  if(_subNodes.size() > 1) *out << " <ArgList>";
  *out << endl;
  for(unsigned int i = 0; i < _subNodes.size(); i++)
  {
    _subNodes[i]->print(out);
  }
}
/******************************************************************************/

NewExpression::NewExpression(string simpletype, Node* arglist, int kind)
:Node(simpletype, "NewExpression", kind)
{
  if (arglist!=0 ) _subNodes.push_back(arglist);
  if(arglist->getErr()) _err = true;
  
}
NewExpression::NewExpression(string simpletype, Node* type2, Node* brackexp, int kind)
:Node(simpletype, "NewExpression", kind)
{
  if (type2!=0 ) 
  {
    _subNodes.push_back(type2);
    if(type2->getErr()) _err = true;
  }
  
  if(brackexp != 0)
  {
    _subNodes.push_back(brackexp);
    if(brackexp->getErr()) _err = true;
  }
  
}
void NewExpression::print(ostream* out)
{
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
      *out << "[<BracketedExpression>] <Multibracks>";
      break;
    }
    case NEWEXPMULTI:
    {
      *out << "<Multibracks>";
      break;
    }
    case NEWEXP:
    {
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

VarDec::VarDec(string type, string id, Node* bracks):Node(id, "VarDec")
{
  _type = type;
  _subNodes.push_back(bracks);
  if(bracks->getErr()) _err = true;
  
}

VarDec::VarDec(string type, string id): Node(id, "VarDec")
{
  _type = type;
}
void VarDec::print(ostream* out)
{
  *out << "<VariableDeclaration> --> ";
  if(_subNodes.size() > 0) 
  {
    *out << "<Multibracks> " << _value << ";" << endl;
    _subNodes[0]->print(out);
  }
  else
  {
    *out << _type << " " << _value << ";" << endl;
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
  *out << "<Multibracks> --> ";
  if(_subNodes.size() > 0) *out << "<Multibracks>[]";
  else *out << " []";
  *out << endl;
  if(_subNodes.size() > 0) _subNodes[0]->print(out);
}

/******************************************************************************/


SimpleType::SimpleType(string value):Node(value, "SimpleType")
{}
void SimpleType::print(ostream* out)
{
  *out << "<SimpleType> --> " << _value << endl;
}


/******************************************************************************/
ErrNode::ErrNode()
{
  _err = true;
}
void ErrNode::print(ostream* out)
{
  cerr << "Tried to print an ErrNdoe!" << endl;
  exit(1);
}
