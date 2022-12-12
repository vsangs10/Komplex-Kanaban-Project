#include <cmath>
#include "../include/Complex.h"

double arg(Complex com) {
  return atan((com.imaginary)/(com.real));
}