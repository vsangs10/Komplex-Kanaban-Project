#include <cmath>
#include "../include/Complex.h"

double cosh(double n){
  double x = pow(EULER,n);
  return ((x + (1/x)) / 2);
}

Complex cosh(Complex com){
  Complex *c = new Complex(cosh(com.real) * cos(com.imaginary), sinh(com.real) * sin(com.imaginary));
  return *c;
}