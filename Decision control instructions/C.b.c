#include <stdio.h>

int main()
{
    int n;
    printf("enter integer: ");
    scanf("%d", &n);
    
    if(n%2==0){
        printf("%d is even", n);
    }
    else if(n%2!=0){
        printf("%d is odd", n);
    }
    

    return 0;
}
