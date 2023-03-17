#include <stdio.h>

int main(){

    int n, a, n1, n2;
    int jogador1 = 0;
    int jogador2 = 0;
    printf("Jogo das Irmãs Competitivas!\nPara jogar digite o numero de rodadas: ");
    scanf("%d", &n);
    printf("Para cada rodada digite dois inteiros(1 de cada jogaor).\nCada rodada eh vencida por quem digitar o numero maior.\n");
    printf("Vence o jogo quem vencer mais rodadas!\n");
    for(a = 1; a <= n; a++){
        printf("Digite 2 inteiros: ");
        scanf("%d %d", &n1, &n2);
        if(n1 > n2){
            jogador1++;
        }
        if(n2 > n1){
            jogador2++;
        }
    }
    printf("Jogador 1: %d\nJogador 2: %d", jogador1, jogador2);

    return 0;
}
