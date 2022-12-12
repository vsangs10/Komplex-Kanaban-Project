#include <cmath>
#include "../include/Complex.h"

Complex atan(Complex com) {
  Complex *top = new Complex(1 - com.imaginary, com.real);
  Complex *bottom = new Complex(1 + com.imaginary, -1 * com.real);
  Complex *l = new Complex(log(*top).real - log(*bottom).real, log(*top).imaginary - log(*bottom).imaginary);
  Complex *c = new Complex(.5 * l->imaginary, -.5 * l->real);
  return *c;
}