#include <stdio.h>

int main(){

    int m[3][2];
    int count = 0;
    int x, y;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] > count){
                count = m[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("linha: %d coluna: %d", x, y);

    return 0;
}
