#include <stdio.h>
int main()
{
    int n;
     printf("Enter ur temparature in farhenheit: ");
     scanf("%d", &n);
        int c = (n - 32) * 5 / 9;
        printf("the temparature in celcius is: %d\n", c);

     return 0;
}