#include <stdio.h>

int main(){

    float r;
    printf("CALCULADORA DE AREA E PERIMETRO\nDigite o raio de uma circunferencia: ");
    scanf("%f", &r);
    printf("Uma circunferencia de raio %f tem perimetro de: %f \nE seu circulo tem area de: %f ", r, 2*r*3.14159, 3.14159*r*r);
    return 0;
}
