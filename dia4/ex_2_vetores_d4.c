#include <stdio.h>

int main(){

    int v[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        if(i%2){
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    return 0;
}
