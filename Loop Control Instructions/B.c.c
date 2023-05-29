#include <stdio.h>
int main()
{
    int n, p, ans=1;
    printf("Enter the first number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &p);

    for (int i = 1; i <= p; i++)
    {
        ans = ans * n;
    }
    printf("%d", ans);

    return 0;
}


// 2^2=2*2=4
// 2^3=2*2*2=8
// 2^4=2*2*2*2=16