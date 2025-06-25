#include <stdio.h>

int get_biggets_value(float x, float y, float z) {
  return x >= y && x >= z
  ? x
  : y >= x && y >= z
    ? y
    : z;
}
