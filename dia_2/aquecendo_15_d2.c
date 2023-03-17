#include <stdio.h>
#include <math.h>

int main(){

    int n, a, r;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(a = 1; a <=n; a++){
        r = pow(a, 2);
        if(r <= n){
            printf("%d ", r);
        }
    }

    return 0;
}
