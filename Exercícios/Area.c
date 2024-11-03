#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,areaTri, areaCirc, areaTrap, areaQuad, areaRet;
    scanf("%lf %lf %lf", &a, &b, &c);
    areaTri = (a*c)/2;
    areaCirc = 3.14159 * pow(c,2);
    areaTrap = (a + b)*c/2;
    areaQuad = pow(b,2);
    areaRet = a * b;

    printf("TRIANGULO: %.3lf\n", areaTri);
    printf("CIRCULO: %.3lf\n", areaCirc);
    printf("TRAPEZIO: %.3lf\n", areaTrap);
    printf("QUADRADO: %.3lf\n", areaQuad);
    printf("RETANGULO: %.3lf\n", areaRet);
    
    return 0;
}