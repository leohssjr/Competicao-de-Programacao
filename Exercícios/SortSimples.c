#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int l, int m, int r){
    int tam = r+1-l;
    int *aux = malloc(sizeof(int));
    int i = l;
    int j = m+1;
    int k = 0;

    while(i<=m && j<=r){
        if(v[i]<=v[j]){
            aux[k++] = v[i++];
        } else{
            aux[k++] = v[j++];
        }
    }
    while(i<=m){
        aux[k++] = v[i++];
    }
    while(j<=r){
        aux[k++] = v[j++];
    }
    for(k = 0, i=l; i<=r;i++,k++){
        v[i] = aux[k];
    }
} 

void merge_sort(int *v, int l, int r){
    if(l>=r) return;
    int m = (r+l)/2;
    merge_sort(v,l,m);
    merge_sort(v,m+1,r);
    merge(v,l,m,r);
}

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int vetAux[3] = {a, b, c};
    int vet[3] = {a, b, c};
    merge_sort(vet, 0,2);
    for(int j = 0; j<3;j++){
        printf("%d\n", vet[j]);
    }
    printf("\n");
    for(int k = 0; k<3;k++){
        printf("%d\n", vetAux[k]);
    }

    return 0;
}