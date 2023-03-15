#include <stdio.h>

int main(){

    int n, a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n >= 0){
        for(a = 1 ; n >= a; a++){
            printf("%d ", a);
        }
    }
    else{
        for(a = 1; n <= a; a--){
            printf("%d ", a);
        }
    }

    return 0;
}
