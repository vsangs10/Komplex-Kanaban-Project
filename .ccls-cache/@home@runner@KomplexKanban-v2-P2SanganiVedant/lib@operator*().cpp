#include <cmath>
#include "../include/Complex.h"

Complex Complex::operator*(Complex com) {
  Complex c; 
  c.real = this->real*com.real - this->imaginary*com.imaginary;
  c.imaginary = this->real*com.imaginary + this->imaginary*com.real;
  return c;
}