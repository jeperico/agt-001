#include <stdio.h>
#include "sum.h"

void main(){
  int n = 0, k = 0, x = 0;

  printf("1° - [ENTER NUMBER] <n>: ");
  scanf("%d", &n);
  printf("2° - [ENTER NUMBER] <k>: ");
  scanf("%d", &k);
  printf("3° - [ENTER NUMBER] <x>: ");
  scanf("%d", &x);

  printf("%d", spsum(n, k, x));

  printf("\n");
}
