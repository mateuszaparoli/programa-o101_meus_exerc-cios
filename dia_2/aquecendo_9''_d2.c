#include <stdio.h>

int main(){

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(int a = 1; a <= 20; a++){
        printf("%d x %d = %d\n", a, n, (a*n));
    }

    return 0;
}

