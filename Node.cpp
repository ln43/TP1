#include "Node.h"
#include <cstdlib> 
#include <iostream>
#include <stdio.h>
#include <math.h>

Node::Node(){
  obj = new Vector();
  next = nullptr;	
}

Node::Node(Node& aobj){
  obj = aobj.obj;
  next = aobj.next;
}

Node::Node(Vector& aobj){
  obj = new Vector(aobj);
  next = nullptr;
}



Vector* Node::get_obj(){
  return obj;
}

Node* Node::get_next(){
  return next;
}

void Node::set_next(Node* n){
  next=n;
}

Node::~Node(){
  delete obj;
}
