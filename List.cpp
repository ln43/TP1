#include "List.h"

List::List(){
  head_=nullptr;
  nb_elts_=0;
}

List::List(Node* n){
  head_=n;
  nb_elts_=0;
}

void List::PushBack(Node* n){
  Node* current = head_;
  if( current!=nullptr){
    while((*current).get_next()!=nullptr){
      current=(*current).get_next();
    }
    (*current).set_next(n);
  }else{
    head_=n;
  }
  
}

void List::Insert(Node* newNode, int pos){
    Node* curr = head_->get_next();
    Node* prev = head_;
    for (int i=0; i<pos; i+=1) {
        curr->get_next();
        prev->get_next();
    }
    prev->set_next(newNode);
    newNode->set_next(curr);
}