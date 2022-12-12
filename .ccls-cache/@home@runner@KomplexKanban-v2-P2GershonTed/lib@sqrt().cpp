#include <cmath>

//Returns the square root of its argument
Complex sqrt(const Complex c) {
  Complex newC(pow(abs(c), 0.5)*cos(0.5*arg(c)), pow(abs(c), 0.5)*sin(0.5*arg(c)));
  return newC;
}