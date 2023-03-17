#include <stdio.h>

int main(){

    int valor, i, n, contador;
    scanf("%d", &valor);
    printf("%d\n", valor);

    printf("%d nota(s) de R$ 100,00\n", valor/100);
    int r1 = valor%100;

    printf("%d nota(s) de R$ 50,00\n", r1/50);
    int r2 = r1%50;

    printf("%d nota(s) de R$ 20,00\n", r2/20);
    int r3 = r2%20;

    printf("%d nota(s) de R$ 10,00\n", r3/10);
    int r4 = r3%10;

    printf("%d nota(s) de R$ 5,00\n", r4/5);
    int r5 = r4%5;

    printf("%d nota(s) de R$ 2,00\n", r5/2);
    int r6 = r5%2;

    printf("%d nota(s) de R$ 1,00\n", r6/1);

    return 0;
}
