#include <cmath>
#include "../include/Complex.h"

double arg(Complex com) {
  return atan((imag(com))/(real(com)));
}
