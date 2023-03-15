#include <stdio.h>

int main(){

    int n1, n2, n3, n4, n5;
    printf("Digite 5 numeros inteiros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int count = 0;
    if(n1 %2 == 1 || n1 %2 == -1){
        count++;
    }
    if(n2 %2 == 1 || n2 %2 == -1){
        count++;
    }
    if(n3 %2 == 1 || n3 %2 == -1){
        count++;
    }
    if(n4 %2 == 1 || n4 %2 == -1){
        count++;
    }
    if(n5 %2 == 1 || n5 %2 == -1){
        count++;
    }
    printf("Desses numeros %d sao impares", count);

    return 0;
}
