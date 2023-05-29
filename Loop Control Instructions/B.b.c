#include <stdio.h>
int main()
{
    int n, m=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        m = m * i;
    }
    printf("The factorial of %d is %d", n, m);

    return 0;
}