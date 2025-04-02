#include <stdio.h>

int main() {
  int x = 5;
  x |= 3;
  x &= 3;
  x ^= 3;
  x >>= 3;
  x <<= 3;
  printf("%d", x);
  return 0;
}