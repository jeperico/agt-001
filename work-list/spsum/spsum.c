#include <stdio.h>

int spsum(int n, int k, int x) {
  int sum = 0;
  int last = 0;
  for(x++; n > 0; x++) {
    if(x % k) continue;
    if(last) printf("%d + ", last);
    last = x;
    sum += x;
    n--;
  }
  printf("%d = ", last);

  return sum;
}
