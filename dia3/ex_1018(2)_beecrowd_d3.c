#include <stdio.h>

int main(){

    int valor;
    int contador100 = 0;
    int contador50 = 0;
    int contador20 = 0;
    int contador10 = 0;
    int contador5 = 0;
    int contador2 = 0;
    int contador1 = 0;
    scanf("%d", &valor);
    for(contador100; valor >= 100; valor = valor - 100){
        contador100++;
    }
    for(contador50; valor >= 50; valor = valor - 50){
        contador50++;
    }
    for(contador20; valor >= 10; valor = valor - 10){
        contador10++;
    }
    for(contador10; valor >= 5; valor = valor - 5){
        contador5++;
    }
    for(contador2; valor >= 2; valor = valor - 2){
        contador2++;
    }
    for(contador1; valor >= 1; valor = valor - 1){
        contador1++;
    }
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", contador100, contador50, contador20, contador10, contador5, contador2, contador1);

    return 0;

}
