#include "../include/Complex.h"
#include <cmath>

double norm(const Complex c) {
  //magSqr is the magnitude squared (a^2+b^2)
  double magSqr = pow(real(c),2)+pow(imag(c),2);
  return magSqr;
}
