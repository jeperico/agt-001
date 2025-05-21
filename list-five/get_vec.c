#include <stdio.h>

void getVec(int size, int vec[]) {
  for (int i = 0; i < size; i++) {
    printf("\033[H\033[J");
    
    printf("\n[1] >> %d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &vec[i]);
  }
}
