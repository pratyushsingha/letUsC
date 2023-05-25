#include <stdio.h>

int main()
{
    int c,s;
    printf("enter cost price: ");
    scanf("%d", &c);
    printf("enter selling price: ");
    scanf("%d", &s);
    if(c>s){
        printf("seller has incurred loss of %d Rs.", c-s);
    }
    else{
        printf("seller has made profit of %d Rs.", s-c);
    }
    

    return 0;
}
