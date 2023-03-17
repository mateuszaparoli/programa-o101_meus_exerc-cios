#include <stdio.h>

int main(){

    float valor;
    scanf("%f", &valor);
    printf("%f\n", valor);
    valor = valor*100;
    printf("%f nota(s) de R$ 100,00\n", valor/100);
    float r1 = valor%100;

    printf("%f nota(s) de R$ 50,00\n", r1/50);
    float r2 = r1%50;

    printf("%f nota(s) de R$ 20,00\n", r2/20);
    float r3 = r2%20;

    printf("%f nota(s) de R$ 10,00\n", r3/10);
    float r4 = r3%10;

    printf("%f nota(s) de R$ 5,00\n", r4/5);
    float r5 = r4%5;

    printf("%f nota(s) de R$ 2,00\n", r5/2);
    float r6 = r5%2;

    printf("%f moeda(s) de R$ 1,00\n", r6/1);
    float r7 = r6%1;

    printf("%f moeda(s) de R$ 0.50\n", r7/0.50);
    float r8 = r7%0.50;

    printf("%f moeda(s) de R$ 0.25\n", r8/0.25);
    float r9 = r8%0.25;

    printf("%f moeda(s) de R$ 0.10\n", r9/0.10);
    float r10 = r9%0.10;

    printf("%f moeda(s) de R$ 0.05\n", r10/0.05);
    float r11 = r10%0.05;

    printf("%f moeda(s) de R$ 0.01\n", r11/0.01);
    float r12 = r11%0.01;

    return 0;
}
