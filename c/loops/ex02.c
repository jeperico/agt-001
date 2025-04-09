#include <stdio.h>
#include <stdlib.h>

void ex02() {

    printf("[FILE 02]");

    float v1, a, t, v;

    printf("[INITIAL SPEED]: ");
    scanf("%f", &v1);

    printf("[ACELERATION]  : ");
    scanf("%f", &a);

    printf("[TIME]         : ");
    scanf("%f", &t);

    v = v1 + (a * t);

    printf("\n[FINAL SPEED]  : %.2f\n", v);
}
