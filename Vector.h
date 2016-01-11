
class Vector{
  protected :
    float x_;
    float y_;
    double norm_;
    
  public :
    Vector();
    Vector(float ax,float ay);
    Vector(const Vector& model);

    Vector add(Vector v);
    
    ~Vector();
    
    //Getter
    float get_x();
    float get_y();
    double get_norm();

  private :
    void Norm();
    

};

