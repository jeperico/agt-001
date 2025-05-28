#include <stdio.h>
#include <stdbool.h>

void main() {
  // Binary Search
  // Note: This implementation assumes the array is sorted.
  // Big-O: O(log2(n))

  int v[] = {2, 4, 5, 8, 11, 17, 32, 44, 60, 81};
  int n = 10, key;

  printf("Input the key to search: ");
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
