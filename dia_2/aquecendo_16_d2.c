#include <stdio.h>

int main(){

    int a, b, r;
    printf("Digite dois numero naturais: ");
    scanf("%d %d", &a, &b);
    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    printf("%d", a);
    return 0;
}
