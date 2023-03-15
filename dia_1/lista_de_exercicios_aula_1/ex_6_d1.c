#include <stdio.h>

int main (){

    int dia1, dia2, mes1, mes2;
    scanf("%d %d", &dia1, &mes1);
    scanf("%d %d", &dia2, &mes2);
    int resultado = ((30-dia1)+(dia2)) + ((mes2 - mes1 - 1)*30);
    printf("%d", resultado);

    return 0;
}
