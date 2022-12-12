#include <cmath>
#include "../include/Complex.h"

Complex log10(Complex com) {
  double real2 = log10(abs(com)); 
  double img2 = log10(EULER) * arg(com);
  Complex *c = new Complex(real2, img2);
  return *c;
}