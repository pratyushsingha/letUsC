#include <stdio.h>
int main()
{
    int l,b, area, perimeter;
     printf("enter the lenth & breath of the reactangle: ");
     scanf("%d %d", &l, &b);

     area = l * b;
          perimeter = 2 * (l + b);

          if(area > perimeter)
          {
                 printf("area of rectangle is greater than its perimeter");
          }
         else
         {
            printf("area of rectangle is smaller than its perimeter");
         }
         
return 0;
}