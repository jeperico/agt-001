#include <stdio.h>


int main() {
  // Declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
  int v_int = 10;
  float v_real = 3.14;
  char v_char = 'C';

  int *p_int;
  float *p_real;
  char *p_char;

  // Associe as variaveis aos ponteiros (use &).
  p_int = &v_int;
  p_real = &v_real;
  p_char = &v_char;

  // Imprima os valores das variaveis antes da modificacao.
  printf("[BEFORE] \n");
  printf("[INT]:  %d \n", *p_int);
  printf("[REAL]: %f \n", *p_real);
  printf("[CHAR]: %c \n\n", *p_char);

  // Modifique os valores de cada variavel usando os ponteiros.
  *p_int = 123;
  *p_real = 1.718281;
  *p_char = 'X';

  // Imprima os valores das variaveis apos a modificacao.
  printf("[AFTER] \n");
  printf("[INT]:  %d \n", *p_int);
  printf("[REAL]: %f \n", *p_real);
  printf("[CHAR]: %c \n", *p_char);

  return 0;
}
