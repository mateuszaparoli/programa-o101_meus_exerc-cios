#include <stdio.h>

int main(){

    float valor;
    int contador100 = 0;
    int contador50 = 0;
    int contador20 = 0;
    int contador10 = 0;
    int contador5 = 0;
    int contador2 = 0;
    int contador1 = 0;
    int contador050 = 0;
    int contador025 = 0;
    int contador010 = 0;
    int contador005 = 0;
    int contador001 = 0;
    scanf("%f", &valor);
    for(contador100; valor >= 100; valor = valor - 100){
        contador100++;
    }
    for(contador50; valor >= 50; valor = valor - 50){
        contador50++;
    }
    for(contador20; valor >= 20; valor = valor - 20){
        contador20++;
    }
    for(contador10; valor >= 10; valor = valor - 10){
        contador10++;
    }
    for(contador5; valor >= 5; valor = valor - 5){
        contador5++;
    }
    for(contador2; valor >= 2; valor = valor - 2){
        contador2++;
    }
    for(contador1; valor >= 1; valor = valor - 1){
        contador1++;
    }
    for(contador050; valor >= 0.50; valor = valor - 0.50){
        contador050++;
    }
    for(contador025; valor >= 0.25; valor = valor - 0.25){
        contador025++;
    }
    for(contador010; valor >= 0.10; valor = valor - 0.10){
        contador010++;
    }
    for(contador005; valor >= 0.05; valor = valor - 0.05){
        contador005++;
    }
    for(contador001; valor >= 0.01; valor = valor - 0.01){
        contador001++;
    }
    printf("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n", contador100, contador50, contador20, contador10, contador5, contador2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n%d moeda(s) de R$ 0,25\n%d moeda(s) de R$ 0,10\n%d moeda(s) de R$ 0,05\n%d moeda(s) de R$ 0,01\n", contador1, contador050, contador025, contador010, contador005, contador001);

    return 0;
}
