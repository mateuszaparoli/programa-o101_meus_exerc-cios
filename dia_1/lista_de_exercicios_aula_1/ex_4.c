#include <stdio.h>

int main(){

    float salario, vendas;
    printf("CALCULADORA DE SALARIOS \nDigite o salario fixo do vendedor: ");
    scanf("%f", &salario);
    printf("Agora digite o montante que ele vendeu(em reais): ");
    scanf("%f", &vendas);
    printf("O total que esse vendedor deve receber no fim desse mes e de: %.2f", salario+(vendas*0.15));

    return 0;
}
