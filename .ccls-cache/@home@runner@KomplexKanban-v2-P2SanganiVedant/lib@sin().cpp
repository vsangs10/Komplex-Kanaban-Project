#include <cmath>
#include "../include/Complex.h"

Complex sin(Complex com){
  Complex *c = new Complex(sin(com.real) * cosh(com.imaginary), cos(com.real) * sinh(com.imaginary));
  return *c;
}