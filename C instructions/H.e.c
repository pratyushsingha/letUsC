#include <stdio.h>
#include <math.h>
int main()
{
    double l1,l2,g1,g2,D;
     printf("Enter L1: ");
     scanf("%lf", &l1);
     printf("Enter L2: ");
     scanf("%lf", &l2);
     printf("Enter G1: ");
     scanf("%lf", &g1);
     printf("Enter G2: ");
     scanf("%lf", &g2);

     D=(3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g1-g2)));
     printf("output distance between them in nautical lines is: %lf",D);

return 0;
}