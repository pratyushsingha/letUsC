#include <stdio.h>
int main()
{
    int n, sum = 0;
    int rem;
    printf("Enter the number: ");
    scanf("%d", &n);
   while(n>0){
        rem=n%10;
        sum= sum+rem;
        n=n/10;
    }
        printf("The sum of digits is: %d", sum);
    return 0;
}