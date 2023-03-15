#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, y1, y2, h;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    h = sqrt((pow((y2 - y1), 2) + pow((x2 - x1), 2)));
    printf("A distancia entre esse dois pontos e: %d", h);

    return 0;
}
