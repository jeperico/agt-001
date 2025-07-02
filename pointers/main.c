#include <stdio.h>

void test(){}

void create_int_array(int n) {
  
}

void main() {
  long int var = 10;
  long int* ptr = &var;
  
  printf("[ptr] %p\n", ptr);
  printf("[var] %ld\n", *ptr);
  printf("[prt-bytes] %zu\n", sizeof(ptr));

  int* null_ptr = NULL;
  void* generic_prt;
  int wild_ptr;

  printf("Size of long int: %zu bytes\n", sizeof(long int));
  printf("Size of int: %zu bytes\n", sizeof(int));

  int arr[4] = {100, 200, 300, 400};
  for(int i = 0; i < 4; i++) {
    printf("%d\n", *(arr + i));
  }
}
