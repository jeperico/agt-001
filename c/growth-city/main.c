#include <stdio.h>
#include <math.h>

void main() {
  int argelPopulation = 90000;
  float argelGrowthRate = 0.03;
  int beirutPopulation = 200000;
  float beirutGrowthRate = 0.015;

  int years = 1;
  float argelGrowth = argelPopulation;
  float beirutGrowth = beirutPopulation;

  while (argelGrowth < beirutGrowth) {
    argelGrowth = argelPopulation * pow((1 + argelGrowthRate), years);
    beirutGrowth = beirutPopulation * pow((1 + beirutGrowthRate), years);
    years++;
  }

  printf("Year %d: Argel: %.2f, Beirute: %.2f\n", years, argelGrowth, beirutGrowth);
}
