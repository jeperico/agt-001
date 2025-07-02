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
