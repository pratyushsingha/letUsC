#include <stdio.h>
int main()
{
    double h, w;
    double bmi;
    printf("enter ur height: ");
    scanf("%lf", &h);
    printf("enter ur weight: ");
    scanf("%lf", &w);
    bmi = w / (h * h);
    // printf("ur bmi is %.3lf", bmi);
    if (bmi < 15)
    {
        printf("Starvation");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Anorexic");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("underweight");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("ideal");
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("overweight");
    }
    else if (bmi >= 30 && bmi <= 40)
    {
       printf("obese");
    }
    else if (bmi >= 40)
    {
        printf("morbidly obese");
    }

    return 0;
}