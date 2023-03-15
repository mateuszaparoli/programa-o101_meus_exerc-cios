#include <stdio.h>

int main() {

    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || a == c || b == c){
        printf("Ha numeros repetidos\n");
        if(a == b){
            if(a < c){
            printf("%d %d\n", a, b);
            }
            else{
                printf("%d\n", c);
            }
        }
        if(a == c){
            if(a < b){
            printf("%d %d\n", a, c);
            }
            else{
                printf("%d\n", b);
            }
        }
        if(b == c){
            if(b < a){
            printf("%d %d\n", b, c);
            }
            else{
                printf("%d\n", a);
            }
        }
    }
    else{
        printf("Nao ha numeros repetidos\n");
        if(a > b && a > c){
            printf("%d\n", a);
        }
        if(b > a && b > c){
            printf("%d\n", b);
        }
        if(c > a && c > b){
            printf("%d\n", c);
        }
    }
    if(a %2 == 0){
        printf("%d ", a);
    }
    if(b %2 == 0){
        printf("%d ", b);
    }
    if(c %2 == 0){
        printf("%d ", c);
    }
    if((a %2 == 0) || (b %2 == 0) || (c %2 == 0)){
        printf("\n");
    }
    if(a %2 == 1 || a%2 == -1){
        printf("%d ", a);
    }
    if(b %2 == 1 || b%2 == -1){
        printf("%d ", b);
    }
    if(c %2 == 1 || b%2 == -1){
        printf("%d ", c);
    }
    if((a %2 == 1) || (b %2 == 1) || (c %2 == 1)|| (a%2 == -1) || (b%2 == -1) || (c%2 == -1)){
        printf("\n");
    }
    if(a > 0){
        printf("%d ", a);
    }
    if(b > 0){
        printf("%d ", b);
    }
    if(c > 0){
        printf("%d ", c);
    }
    if((a > 0) || (b > 0) || (c > 0)){
        printf("\n");
    }
    if(a < 0){
        printf("%d ", a);
    }
    if(b < 0){
        printf("%d ", b);
    }
    if(c < 0){
        printf("%d ", c);
    }
    if((a < 0) || (b < 0) || (c < 0)){
        printf("\n");
    }

    return 0;
}
