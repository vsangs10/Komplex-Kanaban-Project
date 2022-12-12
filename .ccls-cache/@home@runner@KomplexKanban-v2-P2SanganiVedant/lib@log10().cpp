#include <cmath>
#include "../include/Complex.h"

Complex log10(Complex com) {
  double real2 = log(abs(com)); 
  double img2 = arg(com);
  Complex *c = new Complex(real2, img2);
  return *c;
}