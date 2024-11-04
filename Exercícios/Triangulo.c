#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b,&c,&d);

    if(a+b>c && b+c>a && a+c>b){
        printf("S\n");
    }

    else if(a+b>d && b+d>a && a+d>b){
        printf("S\n");
    }

    else if(a+c>d && c+d>a && a+d>c){
        printf("S\n");
    }
    
    else if(b+c>d && c+d>b && b+d>c){
        printf("S\n");
    }

    else{
        printf("N\n");
    }

    return 0;
}