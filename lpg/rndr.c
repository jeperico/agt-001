#include <stdio.h>
#include <stddef.h>

void renderTalbe(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i + 1; j++) printf("*");
    printf("\n");
  }
}

void renderVector(int *vector, int size) {
  printf("+----+-------+\n");
  printf("| %2s | %5s |\n", "id", "value");
  printf("+----+-------+\n");
  for(int i = 0; i < size; i++) {
    printf("| %2d | %5d |\n", i, vector[i]);
  }
  printf("+----+-------+\n");
}

void createVector(int size) {
  int age[size];

  for(int i = 0; i < size; i++) {
    printf("[INPUT] Insert the age[%d]: ", i + 1);
    scanf("%d", &age[i]);
  }

  renderVector(age, size);
}

// onde tu definiu o size
// É uma funçaõ padrão de vetor, 
