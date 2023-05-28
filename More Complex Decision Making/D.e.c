#include <stdio.h>
int main()
{
    int a;
    printf("Enter the box weight(pounds): ");
    scanf("%d", &a);
    if (a < 115)
    {
        printf("Flyweight");
    }
    else if (a > 115 && a <= 121)
    {
        printf("Bantamweight");
    }
    else if (a > 121 && a <= 153)
    {
        printf("Featherweight");
    }
    else if (a > 153 && a <= 189)
    {
        printf("Middleweight");
    }
    else if (a >= 190)
    {
        printf("Heavyweight");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}