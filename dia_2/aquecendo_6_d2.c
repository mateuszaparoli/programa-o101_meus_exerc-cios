#include <stdio.h>

int main(){

    int dia1, dia2, mes1, mes2;
    printf("Digite a data de hoje na forma(dia mes): ");
    scanf("%d %d", &dia1, &mes1);
    printf("Digite a data do primeiro dia de aula na forma(dia mes): ");
    scanf("%d %d", &dia2, &mes2);
    int dias = ((30 - dia1)+dia2);
    if(dia1 == dia2 && mes1 == mes2){
        printf("As ferias acabam hoje");
    }
    else{
        if(mes2 > mes1){
            dias = dias + ((mes2 - mes1 - 1)*30);
        }
        else{
            dias = dias + (((12 - mes1)*30)+(mes2*30)-30);
        }
        printf("Faltam %d dias para as ferias acabarem", dias);
    }

    return 0;
}
