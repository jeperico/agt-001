#include <stdio.h>

// 2) Escreva um programa que leia um vetor de capacidade 30. Substitua, a seguir, todos
// os valores 0 deste vetor por 1 e mostre o vetor na tela.

void main() {
  int size = 30;
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
    printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
