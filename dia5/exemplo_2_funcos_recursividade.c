#include <stdio.h>

int soma_recursiva(int a){

    if(a <= 1){
        return a;
    }

    return a + soma_recursiva(a-1);
}


int main(){


    printf("%d", soma_recursiva(4));

    return 0;
}
