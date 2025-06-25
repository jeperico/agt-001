#include <stdio.h>

int get_type(float x, float y, float z) {
  if((x + y < z) || (x + z < y) || (z + y < x))
    return 0;

  if((x == y) && (x == z))
    return 1;

  int sum = x + y + z; 
  if(!(sum % 12))
    return 10;

  if((x == y) || (x == z) || (y == z))
    return 2;

  return 3;
}
