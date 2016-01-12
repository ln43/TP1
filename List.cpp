#include "List.h"

List::List(){
  head_=nullptr;
  nb_elts_=0;
}

List::List(Node* n){
  head_=n;
  nb_elts_=1;
}

/*void List::PushBack(Node n){
  Node* current=head_;
  if( current!=nullptr){
    while((*current).get_next()!=nullptr){#include <cstdlib>
      current=(*current).get_next();
    }
    (*current).set_next(&n);
  }else{
    head_=;
  }*/
  
void List::PopBack() {
  Node* current=head_;
  if( current!=nullptr){
    for (int i=0; i<nb_elts_-1;i++){
      current=(*current).get_next();
    }
    (*current).set_next(nullptr);
  
  }
  nb_elts_ -=1;
  
}


