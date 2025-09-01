#include <stdio.h>

void main() {
  int x = 1;

  for(int i = 5; i > 0; i--) {
    printf("[CHANGED VALUE] x: from %d to %d\n", x, x-1);
    x += 1;
  }

  printf("[FINAL VALUE] x: %d\n", x);
}
