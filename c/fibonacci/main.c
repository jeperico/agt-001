#include <stdio.h>

void main() {
  int n;
  long long int a = 1, b = 1, current = 0;

  printf("Enter the number of Fibonacci numbers to generate: ");
  scanf("%d", &n);

  printf("1° - %lld\n2° - %lld\n", a, b);

  for (int i = 3; i <= n; i++) {
    current = a + b;
    printf("%d° - %lld\n", i, current);
    a = b;
    b = current;
  }
}
