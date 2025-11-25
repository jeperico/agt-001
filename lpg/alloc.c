#include <stdio.h>
#include <stdlib.h>

int main() {
  // 1. Solicita ao usuário a quantidade inicial de elementos que deseja armazenar em um vetor de inteiros.
  int size = 0, *vec;
  printf("[START] - Quantity: ");
  scanf("%d", &size);

  // 2. Aloca dinamicamente memória suficiente para esse vetor usando malloc.
  vec = malloc(size * sizeof(int));
  if (vec == NULL) {
    printf("[ERROR] - Null vector...");
    return 1;
  }

  // 3. Permite que o usuário preencha os elementos do vetor.
  printf("\n[EDIT] - Populate: \n");
  for (int i = 0; i < size; i++) {
    printf("vec[%d] = ", i);
    scanf("%d", &vec[i]);
  }

  // 4. Pergunta ao usuário a quantidade de elementos para adicionar ao vetor original.
  int increase = 0;
  printf("\n[EDIT] - Quantity: ");
  scanf("%d", &increase);

  // 5. Realoca a memória do vetor usando realloc para acomodar os novos elementos.
  vec = realloc(vec, (size + increase) * sizeof(int));
    if (vec == NULL) {
    printf("\n[ERROR] - Realloc null vector...");
    return 1;
  }

  printf("\n[EDIT] - Populate: \n");
  for (int i = size; i < size + increase; i++) {
    printf("vec[%d] = ", i);
    scanf("%d", &vec[i]);
  }

  // 6. Após a inserção de todos os elementos, exiba o conteúdo completo do vetor.
  printf("\n\n[VIEW] Show vector:\n\n");
  printf("+----+----------+\n");
  printf("| ID |  VALUE   |\n");
  printf("+----+----------+\n");
  for (int i = 0; i < size + increase; i++) {
      printf("| %2d | %8d |\n", i, vec[i]);
  }
  printf("+----+----------+\n");


  // 7. Libera a memória alocada ao final do programa.
  free(vec);

  return 0;
}
