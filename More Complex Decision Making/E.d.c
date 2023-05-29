#include <stdio.h>
#include <math.h>
int main()
{
    float deg;
    printf("enter the degree(in degrees): ");
    scanf("%f", &deg);
    float rad = deg * 3.14 / 180;
    float sinX = sin(rad);
    float cosX = cos(rad);
    float sum = (sinX * sinX) + (cosX * cosX);
    if (sum == 1)
    {
        printf("sum of squares of sine and cosine of this angle is equal to 1.");
    }
    else
    {
        printf("sum of squares of sine and cosine of this angle is not equal to %d.", sum);
    }
    return 0;
}