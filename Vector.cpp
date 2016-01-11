# include "Vector.h"
#include <cstdio> 
#include <math.h>
#include <cassert>
#include <iostream>

Vector::Vector(){
  x_=0.0;
  y_=0.0;
  norm_=0.0;
}

Vector::Vector(float x,float y){
  x_=x;
  y_=y;
  Norm();
}

Vector::Vector(const Vector& model){
  x_=model.x_;
  y_=model.y_;
  Norm();
}

Vector::~Vector(){
 
}

void Vector::Norm(){
  this->norm_=sqrt(x_*x_+y_*y_);
}

Vector Vector::add(Vector v){
  float X=this->x_+v.get_x();
  float Y=this->y_+v.get_y();
  return Vector(X,Y);
}

float Vector::get_x(){
  return x_;
}

float Vector::get_y(){
  return y_;
}

double Vector::get_norm(){
  return norm_;
}
