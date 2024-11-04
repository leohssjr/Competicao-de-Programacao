#include <stdio.h>
#include <stdlib.h>

void conversorDecRom(int num){
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= valores[i]) {
            printf("%s", romanos[i]);
            num -= valores[i];
        }
    }
    printf("\n");     
}

int main()
{
    int n;
    scanf("%d", &n);
    conversorDecRom(n);    
    return 0;
}
