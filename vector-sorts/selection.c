#include <stdio.h>

void main() {
  int size = 8;
  int vec[8] = {6, 9, 14, -3, 17, 99, 16, 0};

  /*
  # [BEST] - O(n²)
  # [AVER] - O(n²)
  # [WORS] - O(n²)

  Double vec iterate -> 
  Find smallest vec[j] ->
  Switch vec[j] <-> vec[i]
  */

  for(int i = 0; i < size-1; i++) {
    int i_less = i;
    for(int j = i+1; j < size; j++) {
      if(vec[j] < vec[i_less]) i_less = j;
    }

    int aux = vec[i];
    vec[i] = vec[i_less];
    vec[i_less] = aux;
  }

  printf("\n+----+--------+\n");
  for(int i = 0; i < size; i++) {
    printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
