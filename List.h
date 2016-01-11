#include "Node.h"

class List{
  protected:
    Node* head_;
    int nb_elts_;
    
  public:
    List();
    void PushBack(Node n);

};
