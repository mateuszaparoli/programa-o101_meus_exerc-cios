#include <stdio.h>

int main(){

    int n;
    printf("Adivinhe o numero que pedro pensou: ");
    scanf("%d", &n);
    while (n != 5){
        printf("Adivinhe o numero que pedro pensou: ");
        scanf("%d", &n);
    }

    return 0;
}
