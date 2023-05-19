// page no.21 F.b
#include <stdio.h>
int main()
{
    double km;
    printf("enter distance between two cities(in km): ");
    scanf("%lf", &km);
    double m = km * 1000;
    double feet = km * 3280.84;
    double inch = km * 39370.08;
    double cm = km * 10000;

    printf("the distance in meters is: %.2f\n", m);
    printf("the distance in feet is: %.2f\n", feet);
    printf("the distance in inches is: %.2f\n", inch);
    printf("the distance in centimeters is: %.2f\n", cm);
    return 0;
}