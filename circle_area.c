#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    double radio, area;

    printf("Introduzca radio: ");
    scanf("%lf", &radio);
    area = M_PI * radio * radio;

    printf("\nEl area de la circunferencia es : %.6lf\n", area);
}
