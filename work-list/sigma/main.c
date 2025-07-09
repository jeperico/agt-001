#include <stdio.h>
#include "sums.h"

void main(){
  int n = 0;

  printf("[ENTER THE NUMBER OF ITERATIONS]: ");
  scanf("%d", &n);

  sum_iterative(n);
  printf("%d\n", n);
  sum_recursive(n);
  printf("\n");
}
