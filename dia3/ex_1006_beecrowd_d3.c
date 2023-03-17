#include <stdio.h>

int main(){

    double a ,b, c, avarege;
    scanf("%lf %lf %lf", &a, &b, &c);
    avarege = ((2*a)+(3*b)+(c*5))/10;
    printf("MEDIA = %.5lf\n", avarege);

    return 0;
}
