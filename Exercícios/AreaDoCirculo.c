#include <stdio.h>
#include <math.h>

int main() {
    double a, resposta;
    scanf("%lf", &a);
    resposta = 3.14159 * pow(a,2);
    printf("A=%.4lf\n", resposta);
    return 0;
}