#include <stdio.h>

int main(){

    int n, a, b, c = 0;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    for(a = 1; a <= n; a++){
        for(b = 1; b <= a; b++){
            c++;
            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}
