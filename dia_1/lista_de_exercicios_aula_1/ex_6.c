#include <stdio.h>
#include <math.h>

int main(){

    int dia1, mes1, dia2, mes2;
    printf("Digite o dia e o mes de hoje: ");
    scanf("%d %d", &dia1, &mes1);
    printf("Digite o dia e o mes da prova: ");
    scanf("%d %d", &dia2, &mes2);
    printf("Faltam %d dias para a prova", sqrt(pow((dia2 - dia1), (dia2 - dia1)))+((mes2 - mes1)*30));

    return 0;
}
