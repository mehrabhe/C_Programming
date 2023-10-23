#include <stdio.h>

int main(){

    double B,R,pi=3.14159;
    scanf("%lf",&R);

    B=(4/3)*pi*R*R*R;
    printf("VOLUME = %.3lf",B);
    
    return 0;
}