#include "Node.h"

class List{
  protected:
    Node* head_;
    int nb_elts_;
    
  public:
    List();
    List(Node*);

    void PushBack(Node*);
    void PopBack ();
    void Insert(Node* newNode,int pos);

};
