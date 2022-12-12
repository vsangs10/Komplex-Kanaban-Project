#include <cmath>
#include "../include/Complex.h"

Complex Complex::operator/(Complex com) {
  Complex c; 
  c.real = (this->real*com.real + this->imaginary*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  c.imaginary = (this->imaginary*com.real - this->real*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  return c;
}