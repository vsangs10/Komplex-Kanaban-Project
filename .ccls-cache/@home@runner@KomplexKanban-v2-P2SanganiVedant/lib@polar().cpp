#include <cmath>
#include "../include/Complex.h"

Complex polar(double mag, double ang=0.0) {
  Complex *c = new Complex(); 
  c->real = sqrt((mag)/(1+(tan(ang)*tan(ang))));
  c->imaginary = tan(ang)*(c->real);
  return *c;
}