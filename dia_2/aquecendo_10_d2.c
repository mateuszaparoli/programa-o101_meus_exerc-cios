#include <stdio.h>

int main(){

    int n;
    printf("Adivinhe o numero que pedro pensou: ");
    scanf("%d", &n);
<<<<<<< HEAD
    if(n != 5){
            printf("Nao foi b em esse, tente novamente!\n");
        }
    while (n != 5){
        printf("Adivinhe o numero que pedro pensou: ");
        scanf("%d", &n);
        if(n != 5){
            printf("Nao foi bem esse, tente novamente!\n");
        }
=======
    while (n != 5){
        printf("Adivinhe o numero que pedro pensou: ");
        scanf("%d", &n);
>>>>>>> 728fd467fd72a95894ce61bc76d5c8354923f89a
    }
    printf("Voce acertou parabens!!");
    return 0;
}
