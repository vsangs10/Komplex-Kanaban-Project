#include <cmath>
#include "../include/Complex.h"

Complex tanh(Complex com) {
  double a = sinh(com).real;
  double b = sinh(com).imaginary;
  double c = cosh(com).real;
  double d = cosh(com).imaginary;
  Complex *x = new Complex((a*c + b*d) / (c*c + d*d), (b*c - a*d)/(c*c + d*d));
  return *x;
}