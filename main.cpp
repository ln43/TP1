#include "List.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
  cout<<"Hello World"<<endl;
  Vector v0;
  Vector v1(1,1);
  Vector vc(v1);
  cout<<"Vector v0: x="<<v0.get_x()<< ", y="<<v0.get_y()<<
   ", norm="<<v0.get_norm()<<endl;
  cout<<"Vector v1: x="<<v1.get_x()<< ", y="<<v1.get_y()<<
    ", norm="<<v1.get_norm()<<endl;
  cout<<"Vector vc: x="<<vc.get_x()<< ", y="<<vc.get_y()<<
    ", norm="<<vc.get_norm()<<endl;
	Vector V=v1.add(vc);
  cout<<"Vector v1+vc: x="<<V.get_x()<< ", y="<<V.get_y()<<
    ", norm="<<V.get_norm()<<endl;
  
  Node n1(v1);
  Vector* Vnode=n1.get_obj();
  Vector V2=*Vnode;
  Node n2(vc);
  cout<<"Vector node: x="<<V2.get_x()<< ", y="<<V2.get_y()<<
   ", norm="<<V2.get_norm()<<endl;

  List l;
  l.PushBack(&n2);
  l.PushBack(&n1);
  Node n(v0);
  Node* newNode=&n;
  l.Insert(newNode, 5);
  
  return EXIT_SUCCESS;
}
