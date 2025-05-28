#include <stdio.h>
#include <stdbool.h>

void main() {
  // Linear Search
  // Big-O: O(n)

  int v[] = { 6, 9, 4, -3, 17, 22, 13, 81, 44, 32 };
  int n = 10, key;

  printf("Input the key to search: ");
  scanf("%d", &key);

  bool found = false;
  int iterations = 0;
  for(int i = 0; i < n; i++) {
    iterations++;
    if(v[i] == key) {
      printf("Key found at index %d\n", i);
      found = true;
      break;
    }
  }

  if(!found) {
    printf("Key not found\n");
  }

  printf("Total iterations: %d\n", iterations);
  printf("Time Complexity: O(n)\n");
}
