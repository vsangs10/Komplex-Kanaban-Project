#include <cmath>
#include "../include/Complex.h"

Complex cos(Complex com) {
  Complex *c = new Complex(cos(com.real) * cosh(com.imaginary), -1 * sin(com.real) * sinh(com.imaginary));
  return *c;
}