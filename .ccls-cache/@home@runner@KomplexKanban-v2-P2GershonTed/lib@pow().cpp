#include <cmath>

//Takes two arguments: pow(b, exp). It raises b to the power of exp
//https://www.math.toronto.edu/mathnet/questionCorner/complexexp.html
Complex pow(double b, const Complex exp) {
  Complex newC(pow(b, real(exp))*cos(imag(exp)*log(b)), pow(b, real(exp))*sin(imag(exp)*log(b)));
  return newC;
}
Complex pow(const Complex b, int exp) {
  Complex newC(pow(abs(c), exp)*cos(exp*arg(c)), pow(abs(c), exp)*sin(exp*arg(c)));
  return newC;
}
Complex pow(const Complex b, double exp) {
  Complex newC(pow(abs(c), exp)*cos(exp*arg(c)), pow(abs(c), exp)*sin(exp*arg(c)));
  return newC;
}
Complex pow(const Complex b, const Complex exp) {
  Complex preEuler(real(exp)*log(abs(b))-imag(exp)*arg(b), imag(exp)*log(abs(b))+real(exp)*arg(b));
  Complex postEuler = exp(preEuler);
  return postEuler;
}
