#include <stdio.h>
#include "big_value.h"

void main() {
  int size = 3;
  float vec[size];

  for(int i = 0; i < size; i++) {
    printf("%d° - [ENTER NUMBER]: ", i + 1);
    scanf("%f", &vec[i]);
  }

  int result = get_biggets_value(vec[0], vec[1], vec[2]);

  printf("%d\n\n", result);
}
