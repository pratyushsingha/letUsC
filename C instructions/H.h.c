#include <stdio.h>
int main()
{
   int c,d, temp;
     printf("Enter C: ");
     scanf("%d", &c);
     printf("Enter D: ");
     scanf("%d", &d);
temp=c;
c=d;
c=temp;
printf("C=%d", c);
printf("D=%d", d);

return 0;
}
