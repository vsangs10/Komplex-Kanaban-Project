#include <cmath>

//mathematic theory sourced from https://www.ncl.ac.uk/webtemplate/ask-assets/external/maths-resources/images/Expo_form_complx_num.pdf
Complex exp(const Complex c) {
  double re = c.real;
  double im = c.imag;
  Complex newC;
  newC.real = pow(EULER, re)*cos(im);
  newC.imag = pow(EULER, re)*sin(im);
  return newC;
}
