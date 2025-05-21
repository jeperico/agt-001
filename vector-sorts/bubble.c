#include <stdio.h>

void main() {
  int size = 8;
  int vec[8] = {6, 9, 14, -3, 17, 99, 16, 0};

  /*
  # [BEST] - O(n)
  # [AVER] - O(n²)
  # [WORS] - O(n²)

  Ordenate from the last to the first:
  Compare vec[i] with vec[i+1] ->
  vec[i+1] == biggest ->
  Iterare from all vec from vec[i-1] to vec[0];
  */

  for(int i = 0; i < size-1; i++) {
    for(int j = 1; j < size; j++) {
      if(vec[j - 1] > vec[j]) {
        int aux = vec[j - 1];
        vec[j - 1] = vec[j];
        vec[j] = aux;
      }
    }
  }

  printf("\n+----+--------+\n");
  for(int i = 0; i < size; i++) {
    printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
