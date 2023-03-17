#include <stdio.h>

// talvez tenha que colocar 'e' como char e verificar se é igual a 'a' 'b' ou 'c' pq com numeros n ta dando certo n

int main(){

    int v[2][2];
    int e;
    int soma1, soma2, soma3;
    soma1 = 0;
    soma2 = 0;
    soma3 = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &v[i][j]);
        }
    }

    printf("Escolha 1 opcao(1, 2, 3):\n1) Somar todos os elementos\n2) Somar os elementos pares\n3)Somar os elementos impares\n");

    scanf("%d", &e);

    if(e == 1){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                soma1 = soma1 + v[i][j];
            }
        }
        printf("%d", soma1);
    }else if(e == 2){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                s = v[i][j]%2;
                if(!s){
                    soma2 = soma2 + v[i][j];
                }
            }
        }
        printf("%d", soma2);
    }else if(e == 3){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                k = v[i][j]%2;
                if(k){
                    soma3 = soma3 + v[i][j];
                }
            }
        }
        printf("%d", soma3);
    }



    return 0;
}
