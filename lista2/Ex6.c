#include <stdio.h>
#include <math.h>

int main ()
{
    float alt2 = 1.10 , alt1 = 1.50;
    int ano=0;
    while(alt1>alt2){
        alt1+= 0.02;
        alt2+= 0.03;
        ano++;
        printf("joão: %.2f \nze: %.2f \nano: %i \n\n", alt1, alt2, ano);
    }
    printf("zé superou joão por %.2f metros em %i anos", alt2-alt1, ano);
    return 0;
}
