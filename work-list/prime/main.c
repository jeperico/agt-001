#include <stdio.h>
#include <stdbool.h>


bool check_prime(int k) {
  if (k == 2) return true;
  if ((k <= 1) || !(k % 2)) return false;

  for (int i = 3; i * i <= k; i += 2) {
    if (k % i == 0) return false;
  }
  return true;
}

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
      printf("%d° - %d\n", n, k);
      count++;
    }
  }
}
