/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexTedGershon.cpp
Author : Ted Gershon
URL : NA
Description : The implementation for Complex.h that was written by Ted Gershon
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex::Complex() 
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
  
}

//COMPLEX MATH AND TRIG FUNCTIONS