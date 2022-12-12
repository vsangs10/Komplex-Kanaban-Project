#include <cmath>
#include "../include/Complex.h"

Complex tan(Complex com) {
  Complex *c = new Complex(sin(2* com.real) / (cosh(2 * com.imaginary) + cos(2* com.real)), sinh(2 * com.imaginary) / (cosh(2 * com.imaginary) + cos(2* com.real)));
  return *c;
}