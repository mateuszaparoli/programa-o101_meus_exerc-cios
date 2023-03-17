#include <stdio.h>

int main(){

    int x, y, v[12];

    for(int i = 0; i < 12; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d %d", &x, &y);
    int s = v[x] + v[y];
    printf("%d", s);

    return 0;
}
