#include <stdio.h>
#include "fibo.h"

void main(){
  int n = 0;

  printf("[ENTER THE NUMBER OF ITERATIONS]: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    printf("%d ", fibo(i));
  }
  printf("\n");
}
