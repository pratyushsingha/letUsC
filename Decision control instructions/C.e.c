#include <stdio.h>
int main()
{
    int n, revNum=0, rem;
     printf("enter the number: ");
     scanf("%d", &n);
    while(n!=0){
        revNum=revNum*10+n%10;
        n/=10;
    }
    // printf("%d\n", revNum);

    if(n=revNum){
        printf("original and reverse is Same");

    }
    else{
        printf("original and reverse is not Same");
    }
return 0;
}