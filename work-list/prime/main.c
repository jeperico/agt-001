#include <stdio.h>
#include "prime.h"


void main() {
  int k = 0, n = 0;

  printf("1° - [ENTER NUMBER]: ");
  scanf("%d", &k);
  printf("2° - [ENTER NUMBER]: ");
  scanf("%d", &n);

  int count = 0;
  while(count < n) {
    k++;
    if(check_prime(k)) {
      printf("\n%d° - %d", count + 1, k);
      count++;
    }
  }
  printf("\n");
}
