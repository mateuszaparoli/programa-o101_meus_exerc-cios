#include <stdio.h>

int main(){

    int n, a;
    int r = 1;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    for(a = 1; a <= n; a++){
        r = r*a;
    }
    printf("%d", r);
    return 0;
}
