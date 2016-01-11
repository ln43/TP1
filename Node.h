#include "Vector.h"

class Node{
  protected:
    Node* next;
    Vector* obj;
    
  public:
    Node();
    Node(const Node&);
    Node(const Vector&);
    ~Node();
    
    void Assign();
    
    Vector* get_obj();
    Node* get_next();
    
    void set_next(Node* n);
};
