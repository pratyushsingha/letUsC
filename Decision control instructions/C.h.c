#include <stdio.h>
int main()
{
    int n, abNum;
    printf("enter the number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        abNum = n * -1;
    }
    printf("absolute value of %d is %d", n, abNum);

    return 0;
}