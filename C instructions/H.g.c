#include <stdio.h>
#include <math.h>
int main()
{
    double n;
     printf("Enter the value of angle: ");
     scanf("%lf", &n);
     
     printf("sin value: %lf\n", sin(n));
     printf("cos value: %lf\n", cos(n));
     printf("tan value: %lf\n", tan(n));
     printf("cosec value: %lf\n", 1/sin(n));
     printf("sec value: %lf\n", 1/cos(n));
     printf("cot value: %lf\n", 1/tan(n));

return 0;
}