#include <stdio.h>
#include "sum.h"

void main() {
  int x = 0, y = 0;

  printf("1° - [ENTER NUMBER]: ");
  scanf("%d", &x);
  printf("2° - [ENTER NUMBER]: ");
  scanf("%d", &y);

  int sum = get_sum(x, y);

  printf("^RESULT^ -> ^%d^", sum);
}
