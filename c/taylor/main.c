#include <stdio.h>
// Study 'Somatória de Taylor'

void main() {
  double x;
  printf("Enter the x variable: ");
  scanf("%lf", &x);

  int n;
  printf("Enter the number of iterations: ");
  scanf("%d", &n);

  double som = 0;
  for(int i = 0; i <= n; i++) {
    double this = 1;
    for (int j = 1; j <= i; j++) this *= x / j;
    som += this;
  }

  printf("e elevado a %.3lf = %.20lf\n", x, som);
}
