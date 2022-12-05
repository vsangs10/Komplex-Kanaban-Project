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

/* Complex::Complex() 
{
  // Constructor code
  real = 0.0;
  imaginary = 0.0;
} 

Complex::Complex(double re, double im)
{
  // Constructor code
  real = re;
  imaginary = im;
} */
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
  c->imaginary = com.imaginary; 
  return *c; 
}

Complex polar(double mag, double ang=0.0) {
  Complex *c = new Complex(); 
}

Complex tan(Complex com) {
  Complex *c = new Complex(com.imaginary/com.real, 0);
  return *c;
}

Complex sin(Complex com){
  double h = sqrt((com.imaginary * com.imaginary) + (com.real * com.real));
  Complex *c = new Complex(com.imaginary/h, 0);
  return *c;
}
Complex cos(Complex com) {
  double h = sqrt((com.imaginary * com.imaginary) + (com.real * com.real));
  Complex *c = new Complex(com.real/h, 0);
  return *c;
}

double sinh(double n) {
  double x = 1;
  for (int i = 0; i < n; i++) {
    x *= EULER;
  }
  return ((x - (1/x)) / 2);
}

double cosh(double n){
  double x = 1;
  for (int i = 0; i < n; i++) {
    x *= EULER;
  }
  return ((x + (1/x)) / 2);
}

Complex cosh(Complex com){
  Complex *c = new Complex(cosh(com.real) * cos(com.imaginary), sinh(com.real) * sin(com.imaginary));
  return *c;
}

Complex sinh(Complex com) {
  Complex *c = new Complex(sinh(com.real) * cos(com.imaginary), cosh(com.real) * sin(com.imaginary));
  return *c;
}

Complex tanh(Complex com) {
  double a = sinh(com).real;
  double b = sinh(com).imaginary;
  double c = cosh(com).real;
  double d = cosh(com).imaginary;
  Complex *x = new Complex((a*c + b*d) / (c*c + d*d), (b*c - a*d)/(c*c + d*d));
  return *x;
}

Complex atan(Complex com) {
  Complex *c = new Complex(atan(com.imaginary / com.real), 0);
  return *c;
}
//COMPLEX MATH AND TRIG FUNCTIONS