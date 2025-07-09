#include <stdio.h>

void sum_iterative(int n) {
  for(int i = 1; i < n; i++) printf("%d ", i);
};

int sum_recursive(int n) {
  printf("%d ", n);
  if(n == 1) return 1;

  return n + sum_recursive(n - 1);
};
