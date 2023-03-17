#include <stdio.h>

int main(){

    int n;
    printf("Adivinhe o numero que pedro pensou: ");
    scanf("%d", &n);
    if(n != 5){
            printf("Nao foi b em esse, tente novamente!\n");
        }
    while (n != 5){
        printf("Adivinhe o numero que pedro pensou: ");
        scanf("%d", &n);
        if(n != 5){
            printf("Nao foi bem esse, tente novamente!\n");
        }
    }
    printf("Voce acertou parabens!!");
    return 0;
}
