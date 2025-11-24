#include <stdio.h>


// Crie uma funcao que recebe um ponteiro para essa variavel.
int increment(int *value) {
  // Incremente a variavel usando ++.
  return (*value)++;
}

int main() {
  // Crie uma variavel do tipo int na funcao main.
  int variable = 1;

  // Implemente a chamada da funcao criada na main
  increment(&variable);

  // Mostre o novo valor da variavel na funcao main.
  printf("\n\n[VARIABLE VALUE]: %d \n", variable);

  return 0;
}
