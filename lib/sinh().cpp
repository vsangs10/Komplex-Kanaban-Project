#include <cmath>
#include "../include/Complex.h"

double sinh(double n) {
  double x = pow(EULER, n);
  return ((x - (1/x)) / 2);
}

Complex sinh(Complex com) {
  Complex *c = new Complex(sinh(com.real) * cos(com.imaginary), cosh(com.real) * sin(com.imaginary));
  return *c;
}