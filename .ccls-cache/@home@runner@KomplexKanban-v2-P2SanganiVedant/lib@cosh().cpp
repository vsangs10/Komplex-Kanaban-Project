#include <cmath>
#include "../include/Complex.h"

double cosh(double n){
  double x = 1;
  for (int i = 0; i < n; i++) {
    x *= EULER;
  }
  return ((x + (1/x)) / 2);
}

Complex cosh(Complex com){
  Complex *c = new Complex(cosh(com.real) * cos(com.imaginary), sinh(com.real) * sin(com.imaginary));
  return *c;
}