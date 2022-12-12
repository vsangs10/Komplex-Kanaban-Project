#include <cmath>
#include "../include/Complex.h"

double abs(Complex com) {
  return sqrt((com.real)*(com.real) + (com.imaginary)*(com.imaginary));
}