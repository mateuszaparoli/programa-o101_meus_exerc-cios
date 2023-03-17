#include <stdio.h>

int main(){

    int v[5][5];
    int x, a, b, flag = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &v[i][j]);
        }
    }

    scanf("%d", &x);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(v[i][j] == x){
                a = i;
                b = j;
                printf("Posicao: linha: %d coluna: %d", a, b);
                flag++;
            }
        }
    }

    if(!flag){
        printf("Valor nao encontrado");
    }

    return 0;
}
