#include <stdio.h>

void main() {
  int size = 8;
  int vec[8] = {4, 3, 2, 10, 12, 1, 5, 6};
  //           {3, 2, 4, 10, 1, 5, 12, 6};

  /*
  # [BEST] - O(n)
  # [AVER] - O(n²)
  # [WORS] - O(n²)

  Ordenate from the last to the first:
  Compare vec[i] with vec[i+1] ->
  vec[i+1] == biggest ->
  Iterare from all vec from vec[i-1] to vec[0];
  */

  for(int i = 0; i < size - 1; i++) {
    for(int j = 0; j < i; j++) {
      int green = vec[i];
      int red = vec[j];
      printf("vec[i = %d] - %d\nvec[j = %d] - %d\n\n", i, green, j, red);
    }
    // for(int j = i - 1; j > -1; j--) {
    //   int green = vec[i];
    //   int red = vec[j];
    //   if(green < red) {
    //     int aux = red;
    //     vec[j] = green;
    //     vec[i] = aux;
    //     for(int k = j + 1; k < i; k++) {
    //       printf("k: %d\n", k);
    //       int aux = vec[k];
    //       vec[k] = green;
    //       vec[i] = aux;
    //     }
    //   }
    //   printf("i: %d - %d\nj: %d - %d\n\n", i, green, j, red);
    // }
  }

  printf("\n+----+--------+\n");
  for(int i = 0; i < size; i++) {
    printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
