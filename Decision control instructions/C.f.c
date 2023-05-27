#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
     printf("enter the age of Ram: ");
     scanf("%d", &ram);
     printf("enter the age of shyam: ");
     scanf("%d", &shyam);
     printf("enter the age of ajay: ");
     scanf("%d", &ajay);

     if (ram<shyam && ram<ajay)
     {
        printf("Ram is youngest");
     }
     else if (shyam<ram && shyam<ajay) 
     {
            printf("Shyam is youngest");
     }
     else if (ajay<ram && ajay<shyam) 
     {
            printf("ajay is youngest");
     }
     
     
return 0;
}