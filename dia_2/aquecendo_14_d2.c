#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, d;
    float x1, x2, sqrtd;
    printf("Digite tres coeficientes inteiros de um polinomio do 2 grau: ");
    scanf("%d %d %d", &a, &b, &c);
    d = pow(b, 2)-(4*a*c);
    sqrtd = sqrt(d);
    x1 = ((-1*b)+sqrtd)/(2*a);
    x2 = ((-1*b)-sqrtd)/(2*a);
    if(d < 0){
        printf("Nao existem raizes reais!");
    }
    if(d == 0){
        printf("1 raiz real: %.3f", x1);
    }
    if(d > 0){
        printf("2 raizes reais: %.3f %.3f", x1, x2);
    }

    return 0;
}
