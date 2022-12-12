#include <cmath>
#include "../include/Complex.h"

double abs(Complex com) {
  return sqrt((real(com))*(real(com)) + (imag(com))*(imag(com)));
}
