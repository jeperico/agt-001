#include <stdio.h>
#include <stdlib.h>

void main() {
  int *v = NULL;
  int capacity = 0;
  int size = 0;
  int value;

  printf("Enter values for the vector (-1 to stop):\n");

  while(1) {
    printf("Enter value: ");
    scanf("%d", &value);

    if (value == -1) {
      break;
    }

    if (size >= capacity) {
      capacity = (capacity == 0) ? 1 : capacity * 2;
      v = realloc(v, capacity * sizeof(int));
      if (v == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
      }
    }

    v[size] = value;
    size++;
  }

  printf("\nCapacity: %d\n", capacity);
  printf("\nVector elements:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", v[i]);
  }

  free(v);
}
