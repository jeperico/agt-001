#include <stdio.h>

void main() {
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      printf("[FOUNDED]: %d\n", i);
      break;
    }
    else printf("[NUMBER]: %d\n", i);
  }
}
