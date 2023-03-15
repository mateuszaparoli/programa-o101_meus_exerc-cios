#include <stdio.h>

int main(){

    float tempo, vel;
    printf("CALCULADORA DE LITROS PARA VIAGENS \nDigite o tempo gasto na viagem(em horas): ");
    scanf("%f", &tempo);
    printf("Agora digite a velocidade media exercida durante a viagem: ");
    scanf("%f", &vel);
    printf("O total de litros de combustivel gastos na viagem foi de: %.3f", (vel*tempo)/12);

    return 0;
}
