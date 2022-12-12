#include <cmath>
#include "../include/Complex.h"

Complex Complex::operator-(Complex com) {
  Complex c; 
  c.real = this->real - com.real;
  c.imaginary = this->imaginary - com.imaginary;
  return c;
}