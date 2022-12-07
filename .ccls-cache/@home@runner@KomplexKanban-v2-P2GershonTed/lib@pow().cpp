#include <cmath>

Complex pow(double b, const Complex exp) {
  Complex newC(pow(b, exp.real)*cos(c.imag), pow(b, exp.real)*sin(c.imag));
  return newC;
}
Complex pow(const Complex b, int exp) {
  Complex newC(pow(b.real, exp), pow(b.imag, exp));
  return newC;
}
Complex pow(const Complex b, double exp) {
  Complex newC(pow(b.real, exp), pow(b.imag, exp));
  return newC;
}
Complex pow(const Complex b, const Complex exp) {
  
}
/* double re = c.real;
  double im = c.imag;
  Complex newC;
  newC.real = pow(EULER, re)*cos(im);
  newC.imag = pow(EULER, re)*sin(im);
  return newC; */