#include <stdio.h>

int main() {
    int n, posmenor;
    scanf("%d", &n);
    int v[n];
    for(int j = 0; j<n;j++){
        scanf("%d", &v[j]);
    }
    int menor = v[0];
    for(int i = 1; i<n; i++){
        if(v[i]<menor){
            menor = v[i];
            posmenor = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posmenor);
    return 0;
}