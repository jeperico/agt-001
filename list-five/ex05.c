#include <stdio.h>

// 5) Faça um programa que leia 30 valores inteiros em um vetor e retorne a média dos
// valores ímpares maiores que 10.

void main() {
  int size = 5;
  int vec[size];
  int sum = 0;
  int qtd = 0;

  for(int i = 0; i < size; i++) {
    printf("\033[H\033[J");
    
    int current = 0;
    printf("\n%d° - [ENTER NUMBER]: ", i + 1);
    scanf("%d", &current);
    
    vec[i] = current;

    if(current % 2 == 1 && current > 10) {
        sum += current;
        qtd++;
    }
  }

  printf("\033[H\033[J");

  printf("\n+----+--------+\n");
  if (qtd != 0) {
    printf("| %-11d |\n", sum / qtd);
  } else {
    printf("| %-11s |\n", "N/A");
  }
  printf("+----+--------+\n\n");
}
