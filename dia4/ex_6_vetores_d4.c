#include <stdio.h>

int main(){

    int v[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    for(int i = 0; i < 10; i++){
        printf("%d", v[i]);
        if(i < 9){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }


    return 0;
}
