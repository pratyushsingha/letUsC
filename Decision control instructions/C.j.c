#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
     printf("Enter first point(x1,y1): ");
     scanf("%d %d", &x1, &y1);
     printf("Enter second point(x2,y2): ");
     scanf("%d %d", &x2, &y2);
     printf("Enter third point(x3,y3): ");
     scanf("%d %d", &x3, &y3);


     int area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
     if(area==0)
     {
         printf("Points are fall on the same straight line");
     }
     else
     {
         printf("Points are not fall on the same straight line");
     }
return 0;
}