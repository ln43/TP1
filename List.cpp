#include "List.h"

List::List(){
  head_=nullptr;
  nb_elts_=0;
}

List::List(Node* n){
  head_=n;
  nb_elts_=1;
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
  nb_elts_ +=1;
}
  
void List::PopBack() {
  if (nb_elts_ < 2) {
		head_ = nullptr;
		nb_elts_ = 0;
  }
  else {
    Node* current=head_;
    int i =0;
    while (i<nb_elts_-2){
        current=(*current).get_next();
        i++;
      }
    (*current).set_next(nullptr);
    nb_elts_ -=1;
  }
  
}


