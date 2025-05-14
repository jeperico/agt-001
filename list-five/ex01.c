#include <stdio.h>

// 1) Faça um programa que leia um vetor de inteiros de capacidade 20, e mostre na tela a
// quantidade de valores pares

void main() {
  int size = 20;
  int vec[size];

  int sum = 0;
  for(int i = 0; i < size; i++) {
    printf("\033[H\033[J");
    
    int current = 0;
    printf("\n%d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &current);
    
    if(current % 2 == 0) sum++;
    
    vec[i] = current;
  }

  printf("\n\n[[%d] odd numbers!]\n\n\n", sum);
}
