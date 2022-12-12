#include <cmath>
#include "../include/Complex.h"

Complex conj(Complex com) { 
  Complex *c = new Complex(); 
  c->real = com.real; 
  c->imaginary = -(com.imaginary); 
  return *c; 
}