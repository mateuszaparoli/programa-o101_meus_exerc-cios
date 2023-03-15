#include <stdio.h>

int main(){

    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if (n1*n2 < 100){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if(3*n1 > n2){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if(n1 > 0 || n2 > 0){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if(n1 < 0 && n2 < 0){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if(n1 %2 == 1 || n2 %2 == 1){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    if(n1 < n2){
        printf("%d", n1);
    }
    else{
        printf("%d", n2);
    }

    return 0;
}
