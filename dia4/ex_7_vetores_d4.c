#include <stdio.h>

//Precisa imprimir "Valor não encontrado" se não achar o valor

int main(){

    int v[14];
    int x, flag;
    for(int i = 0; i < 14; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    for(int i = 0; i < 14; i++){
        if(x == v[i]){
            printf("Posicao %d\n", i);
            flag++;
            return 0;
        }
    }
    if(!flag){
        printf("Valor nao encontrado");
    }

    return 0;
}
