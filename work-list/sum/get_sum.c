#include <stdio.h>

int get_sum(int x, int y) {
  if(x > y) {
    int temp = x;
    x = y;
    y = temp;
  }

  if(x % 2) x+=2;
  else x++;

  int sum = 0;
  while(x < y) {
    sum += x;
    x += 2;
  }

  return sum;
}
