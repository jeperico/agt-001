#include <stdio.h>
#include <math.h>

void main() {
  // int argelPopulation = 90000;
  // float argelGrowthRate = 0.03;
  // int beirutPopulation = 200000;
  // float beirutGrowthRate = 0.015;
  int argelPopulation;
  float argelGrowthRate;
  int beirutPopulation;
  float beirutGrowthRate;

  printf("Enter Argel population: ");
  scanf("%d", &argelPopulation);
  printf("Enter Argel growth rate (e.g., 0.03 for 3%%): ");
  scanf("%f", &argelGrowthRate);
  printf("Enter Beirut population: ");
  scanf("%d", &beirutPopulation);
  printf("Enter Beirut growth rate (e.g., 0.015 for 1.5%%): ");
  scanf("%f", &beirutGrowthRate);

  if (argelPopulation <= 0 || beirutPopulation <= 0) {
    printf("Population must be greater than 0.\n");
    return;
  }
  if (argelGrowthRate < 0 || beirutGrowthRate < 0) {
    printf("Growth rate must be non-negative.\n");
    return;
  }
  if (argelPopulation > beirutPopulation) {
    printf("Year %d: Argel: %.2d, Beirute: %.2d\n", 0, argelPopulation, beirutPopulation);
    return;
  }
  if (argelGrowthRate < beirutGrowthRate) {
    printf("Argel's growth rate must be greater than Beirut's growth rate.\n");
    return;
  }

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
