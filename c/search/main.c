#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void main() {
  // Binary Search
  // Note: This implementation assumes the array is sorted.
  // Big-O: O(log2(n))

  srand(time(NULL));
  int v[100];
  int size = sizeof(v) / sizeof(v[0]);
  for (int i = 0; i < size; i++) {
    v[i] = rand() % 100;
    printf("%d ", v[i]);
  }
  int n = 10, key;

  for(int i = 0; i < size-1; i++) {
    for(int j = 1; j < size; j++) {
      if(v[j - 1] > v[j]) {
        int aux = v[j - 1];
        v[j - 1] = v[j];
        v[j] = aux;
      }
    }
  }

  printf("\nInput the key to search: ");
  scanf("%d", &key);

  bool found = false;
  int iterations = 0;
  int left = 0, right = n - 1, center;
  do {
    center = (left + right) / 2;
    iterations++;
    if (v[center] == key) {
      printf("Key found at index %d\n", center);
      found = true;
    } else if (v[center] < key) {
      left = center + 1;
    } else {
      right = center - 1;
    }
  } while (!found && left <= right);
  

  if(!found) {
    printf("Key not found\n");
  }

  printf("Total iterations: %d\n", iterations);
  printf("Time Complexity: O(log2(n))\n");
}
