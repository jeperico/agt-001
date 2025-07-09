#include <stdio.h>
#include "serial.h"

void main(){
  int n = 0;

  printf("[ENTER THE NUMBER OF ITERATIONS]: ");
  scanf("%d", &n);

  serial_iterative(n);
  printf("%d\n", n);
  serial_recursive(n);
  printf("\n");
}
