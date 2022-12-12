#include "../include/Complex.h"
#include <cmath>

//Computes e^c, where e is the base of the natural logarithms, and c is the argument given to exp
Complex exp(const Complex c) {
  Complex newC(pow(EULER, real(c))*cos(imag(c)), pow(EULER, real(c))*sin(imag(c)));
  return newC;
}
