#include <stdio.h>
#include <math.h>
int main()
{
    double temp, vel;
    printf("Enter the temperature: ");
    scanf("%lf", &temp);
    printf("Enter the Wind velocity: ");
    scanf("%lf", &vel);

    double wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(vel, 0.16);
    printf("The wind chill temparature is: %lf", wcf);

    return 0;
}