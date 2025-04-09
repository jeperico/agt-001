#include <stdio.h>


void main() {
    double a, b, c, delta, x1, x2;

    printf("[COEFICIENT] <A>");
    scanf("%lf", &a);
    printf("[COEFICIENT] <B>");
    scanf("%lf", &b);
    printf("[COEFICIENT] <C>");
    scanf("%lf", &c);

    delta = (b*b) - (4 * a * c);

    if(delta < 0) {
        printf("C number");
    } else {
        x1 = (0 - b + delta) / (2 * a);
        x2 = (0 - b - delta) / (2 * a);
        printf("[X1] => <%lf>. [X2] => <%lf>.", x1, x2);
    }
}