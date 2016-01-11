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
