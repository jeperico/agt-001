#include <stdio.h>
#include "type.h"

void main() {
  int size = 3;
  float vec[size];

  for(int i = 0; i < size; i++) {
    printf("%d° - [ENTER NUMBER]: ", i + 1);
    scanf("%f", &vec[i]);
  }

  int result = get_type(vec[0], vec[1], vec[2]);

  switch(result) {
    case 0:
      printf("^result^ - ^NOT-A-TRIANGLE^\n\n");
      break;
    case 1:
      printf("^result^ - ^Equilátero^\n\n");
      break;
    case 2:
      printf("^result^ - ^Isóceles^\n\n");
      break;
    case 3:
      printf("^result^ - ^Escaleno^\n\n");
      break;
    case 10:
      printf("^result^ - ^Escaleno-[Pitagórico]^\n\n");
      break;
    default:
      printf("^ERROR-500^ - ^INTERNAL-SERVER-ERROR^\n\n");
      break;
  }
}
