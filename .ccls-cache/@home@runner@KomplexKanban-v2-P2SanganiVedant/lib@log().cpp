#include <cmath>
#include "../include/Complex.h"

Complex log(Complex com) {
  Complex *c = new Complex(); 
  c->real = log(abs(com));
  c->imaginary = arg(com);
  return *c;
}