#include <stdio.h>
int main()
{
    int x, y;
     printf("Enter the point(x,y): ");
     scanf("%d %d", &x, &y);

     if (x==0 && y!=0){
        printf("Point lies on y-axis");
     }
     else if (y==0 &&x!=0){
        printf("Point lies on x-axis");
     }
     else if (x==0 && y==0){
        printf("Point lies on origin");
     }
        else{
            printf("Point lies on neither x-axis nor y-axis");
        }
     
return 0;
}