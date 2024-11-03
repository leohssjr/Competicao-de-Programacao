#include <stdio.h>

int main() {
    int a,b,c,d,resposta;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    resposta = (a*b - c*d);
    printf("DIFERENCA = %d\n", resposta);
    return 0;
}