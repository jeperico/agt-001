#include <stdio.h>

// 4) Escreva um programa que leia dois vetores de capacidade 10 e faça a multiplicação
// dos elementos de mesmo índice, colocando os resultados em um terceiro vetor.
// Mostre o vetor resultante.

void main() {
  int size1 = 20;
  int vec1[size1];

  for(int i = 0; i < size1; i++) {
    printf("\033[H\033[J");
    
    int current = 0;
    printf("\n[1] >> %d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &current);
    
    vec1[i] = current;
  }

  int size2 = 20;
  int vec2[size2];

  for(int i = 0; i < size2; i++) {
    printf("\033[H\033[J");
    
    int current = 0;
    printf("\n[2] >> %d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &current);
    
    vec2[i] = current;
  }

  int size = 20;
  int vec[size];

  for(int i = 0; i < size; i++) {
    vec[i] = vec1[i] * vec2[i];
  }

  printf("\033[H\033[J");

  printf("\n+----+--------+\n");
  for(int i = 0; i < size; i++) {
    if(vec[i] >= 0) printf("| %-2d | %-6d |\n", i, vec[i]);
  }
  printf("+----+--------+\n\n");
}
