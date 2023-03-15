#include <stdio.h>

int main(){

    char sexo;
    float altura;
    printf("Digite um sexo entre homem e mulher(h/m): ");
    scanf("%c", &sexo);
    printf("Agora digite a altura dessa pessoa: ");
    scanf("%f", &altura);
    if(sexo == 'h'){
        printf("%.2f", (72.7*altura)-58);
    }
    else{
        printf("%.2f", (62.1*altura)-44.7);
    }

    return 0;
}
