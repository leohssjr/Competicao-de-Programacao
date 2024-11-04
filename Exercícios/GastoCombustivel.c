#include <stdio.h>

int main() {
    double tempoViagem, velocidadeMed, distancia, result;
    scanf("%lf", &tempoViagem);
    scanf("%lf", &velocidadeMed);

    distancia = tempoViagem*velocidadeMed;
    result = distancia/12;

    printf("%.3lf\n", result);

    return 0;
}