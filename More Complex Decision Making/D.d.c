#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}
