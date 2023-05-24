#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, area=0, s=0;
     printf("Enter three sides of the triangle: ");
     printf("Enter a: ");
     scanf("%f\n", &a);
      printf("Enter b: ");
     scanf("%f\n", &b);
      printf("Enter c: ");
     scanf("%f\n", &c);

     s=(a+b+c)/2;
     area= sqrt(s * (s - a) * (s - b) * (s - c));
     printf("The area of the triangle: %.2f",area);

     
return 0;
}