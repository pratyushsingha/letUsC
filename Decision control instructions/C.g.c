#include <stdio.h>
int main()
{
    int a, b, c, sum=0;
     printf("Enter 3 angles of triangle: ");
     scanf("%d %d %d", &a, &b, &c);
     if (a+b+c==180)
     {
        printf("Triangle is valid");
     }
     else if (a+b+c!=180)
     {
        printf("Triangle is not valid");
     }
     
return 0;
}