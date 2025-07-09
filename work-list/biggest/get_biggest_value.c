#include <stdio.h>

int get_biggets_value(int x, int y, int z) {
  return x >= y && x >= z
  ? x
  : y >= x && y >= z
    ? y
    : z;
}
