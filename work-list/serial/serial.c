#include <stdio.h>

void serial_iterative(int n) {
  double sum = 0.0;
  for (int i = 1; i <= n; i++) {
    sum += 1.0 / i;
  }

  printf("%f", sum);
}

double serial_recursive(double n) {
  if (n == 1) return 1.0;

  return 1.0 / n + serial_recursive(n - 1);
}
