#include <cmath>

double norm(const Complex c) {
  //magSqr is the magnitude squared (a^2+b^2)
  double magSqr = pow(c.real,2)+pow(c.imag,2);
  return magSqr;
}
