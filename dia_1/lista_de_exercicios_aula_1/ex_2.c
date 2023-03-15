#include <stdio.h>

int main(){

    float temp;
    printf("CONVERSOR °C PARA °F \n Digite o valor da temperatura em °C: ");
    scanf("%f", &temp);
    printf("O valor de %f°C em °F eh de: %f°F", temp, 9*temp/5+32);

    return 0;
}
