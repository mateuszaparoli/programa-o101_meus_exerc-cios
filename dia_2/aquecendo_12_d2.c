#include <stdio.h>

int main(){

    int j1, j2, j3;
    printf("ANALIZADOR DE JOGOS DE DOIS OU UM ENTRE 3 PESSOAS\nDigite as jogadas de uma partida: ");
    scanf("%d %d %d", &j1, &j2, &j3);
    while(j1 == j2 && j1 == j3 && j2 == j3){
        printf("Tente novamente: ");
        scanf("%d %d %d", &j1, &j2, &j3);

    }
    if(j1 == j2 && j1 != j3){
        printf("O jogador perdedor eh o jogador 3");
    }
    if(j1 == j3 && j1!= j2){
        printf("O jogador perdedor eh o jogador 2");
    }
    if(j2 == j3 && j2 != j1){
        printf("O jogador perdedor eh o jogador 1");
    }

    return 0;
}
