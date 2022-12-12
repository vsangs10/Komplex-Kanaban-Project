/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexVVTAG.cpp
Author : Vedant Sangani, George Yu, Ted Gershon, Anthony Lu, Vishwa Kumaravel
URL : NA
Description : The implementation for Complex.h that was written by Vedant, George, Ted, Anthony, and Vishwa
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

/*Complex::Complex() 
{
  // Constructor code
  real = 0.0;
  imaginary = 0.0;
} */

/* Complex::Complex(double re, double im)
{
  // Constructor code
  real = re;
  imaginary = im;
} */

// - - - - - Operators - - - - - - - - - - - - 
Complex Complex::operator+(Complex com) {
  Complex c; 
  c.real = this->real + com.real;
  c.imaginary = this->imaginary + com.imaginary;
  return c;
}

Complex Complex::operator-(Complex com) {
  Complex c; 
  c.real = this->real - com.real;
  c.imaginary = this->imaginary - com.imaginary;
  return c;
}

Complex Complex::operator*(Complex com) {
  Complex c; 
  c.real = this->real*com.real - this->imaginary*com.imaginary;
  c.imaginary = this->real*com.imaginary + this->imaginary*com.real;
  return c;
}

Complex Complex::operator/(Complex com) {
  Complex c; 
  c.real = (this->real*com.real + this->imaginary*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  c.imaginary = (this->imaginary*com.real - this->real*com.imaginary)/(com.real*com.real + com.imaginary*com.imaginary);
  return c;
}

// - - - - - Other Functions Follow - - - - - - - - - - - - (https://docs.google.com/document/d/1jOSBSdjnHwtfYxM3yntPkhqkaBimNBSI7-og9L94l84/edit)
double real(Complex com) {
  return com.real; 
}

double imag(Complex com) {
  return com.imaginary; 
}

//ARITHMETIC LIBRARY FUNCTIONS
//absol
double abs(Complex com) {
  return sqrt((com.real)*(com.real) + (com.imaginary)*(com.imaginary));
}

double arg(Complex com) {
  return atan((com.imaginary)/(com.real));
}

Complex conj(Complex com) { 
  Complex *c = new Complex(); 
  c->real = com.real; 
  c->imaginary = -(com.imaginary); 
  return *c; 
}

Complex polar(double mag, double ang=0.0) {
  Complex *c = new Complex(); 
  c->real = sqrt((mag)/(1+(tan(ang)*tan(ang))));
  c->imaginary = tan(ang)*(c->real);
  return *c;
}

Complex log(Complex com) {
  Complex *c = new Complex(); 
  c->real = log(abs(com));
  c->imaginary = arg(com);
  return *c;
}

Complex acos(Complex com) {
  
}



//COMPLEX MATH AND TRIG FUNCTIONS