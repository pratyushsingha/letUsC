#include <stdio.h>
#include <math.h>

int main()
{
    double r = 0, phie = 0;
    double x, y;

    printf("Enter the value of X: ");
    scanf("%lf", &x);
    printf("Enter the value of Y: ");
    scanf("%lf", &y);

    r = sqrt((x * x) + (y * y));
    phie = atan(y / x);

    printf("Your Polar coordinates = (%.2lf, %.2lf)", r, phie);

    return 0;
}
