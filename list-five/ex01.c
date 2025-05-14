#include <stdio.h>

// 1) Faça um programa que leia um vetor de inteiros de capacidade 20, e mostre na tela a
// quantidade de valores pares

void main() {
  int size = 20;
  int vec[size];

  for(int i = 0; i < size; i++) {
    int current = 0;
    scanf("%d", &current);

    vec[i] = current;
    printf("<[%d]>", current);
  }
}
