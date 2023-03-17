#include <stdio.h>

int main (){

    int v[8];

    for(int i = 0; i < 8; i++){
        scanf("%d", &v[i]);
    }
    for(int i = 7; i > -1; i--){
        printf("%d ", v[i]);
    }

    return 0;
}
