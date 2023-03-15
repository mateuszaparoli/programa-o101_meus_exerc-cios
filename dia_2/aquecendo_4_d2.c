#include <stdio.h>

int main(){

    float salario, prestacao;
    printf("Digite o salario do cliente e o valor da prestaçao: ");
    scanf("%f %f", &salario, &prestacao);
    if(salario < 0 || prestacao < 0){
        printf("Valores invalidos");
        return 0;
    }
    if(prestacao > 0.2*salario){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
    return 0;
}
