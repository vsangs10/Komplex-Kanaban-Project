#include <cmath>
#include "../include/Complex.h"

Complex Complex::operator+(Complex com) {
  Complex c; 
  c.real = this->real + com.real;
  c.imaginary = this->imaginary + com.imaginary;
  return c;
}

Complex Complex::operator+=(Complex com) {
  *this = *this + com;
  return *this;
}

Complex Complex::operator-(Complex com) {
  Complex c; 
  c.real = this->real - com.real;
  c.imaginary = this->imaginary - com.imaginary;
  return c;
}

Complex Complex::operator-=(Complex com) {
  *this = *this - com;
  return *this;
}

Complex Complex::operator*(Complex com) {
  Complex c; 
  c.real = this->real*com.real - this->imaginary*com.imaginary;
  c.imaginary = this->real*com.imaginary + this->imaginary*com.real;
  return c;
}

Complex Complex::operator*=(Complex com) {
  *this = *this * com;
  return *this;
}

Complex Complex::operator/(Complex com) {
  Complex c; 
  c.real = (this->real*com.real + this->imaginary*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  c.imaginary = (this->imaginary*com.real - this->real*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  return c;
}

Complex Complex::operator/=(Complex com) {
  *this = *this / com;
  return *this;
}

bool Complex::operator==(Complex com) {
  return ((this->real == com.real) && (this->imaginary == com.imaginary));
}

bool Complex::operator!=(Complex com) {
  return !((this->real == com.real) && (this->imaginary == com.imaginary));
}

ostream& operator<<(ostream& out, Complex& com) {
  out << "(" << com.real << ", " << com.imaginary << ")";
  return out;
}

istream& operator>>(istream& in, Complex& com) {
  string s;
  getline(in, s);
  double real; 
  double imaginary; 
  real = stod(s.substr(s.find('(')+1, s.find(',')-1));real = 
  imaginary = stod(s.substr(s.find(',')+1, s.length()-s.find(',')-2));
  com.real = real;
  com.imaginary = imaginary; 
  return in;
}
