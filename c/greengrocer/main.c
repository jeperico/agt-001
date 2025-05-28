#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

void main() {
  int code[MAX];
  for (int i = 0; i < MAX; i++) code[i] = -1;
  int price[MAX];
  char name[MAX][50];

  printf("[STORAGE]\n");
  for (int i = 0; i < MAX; i++) {
    printf("Enter code, price, and name for item %d (-1 to stop): ", i + 1);
    scanf("%d", &code[i]);
    if (code[i] == -1) break;
    scanf("%d", &price[i]);
    scanf("%s", name[i]);
  }

  printf("\n[CASHIER]\n");
  

}
