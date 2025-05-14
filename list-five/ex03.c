#include <stdio.h>

// 3) Elabore um algoritmo que leia um vetor com 20 inteiros e mostre na tela somente os
// valores positivos.

void main() {
  int size = 20;
  int vec[size];

  for(int i = 0; i < size; i++) {
    printf("\033[H\033[J");
    
    int current = 0;
    printf("\n%d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &current);
    
    if(current == 0) vec[i] = 1;
    else vec[i] = current;
  }

  printf("\033[H\033[J");

  printf("\n+----+--------+\n");
  for(int i = 0; i < size; i++) {
    if(vec[i] >= 0) printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
