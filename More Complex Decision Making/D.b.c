#include <stdio.h>
int main()
{
    char c;
     printf("Enter The Character: ");
     scanf("%c", &c);
    if (c>=65 && c<=90)
    {
        printf("capital letter");
    }
    else if (c>=97 && c<=122)
    {
        printf("small letter");
    }
    else if (c>=48 && c<=57)
    {
        printf("digit");
    }
    else if (c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127) {
        printf("special symbol");
    }

    
    
    
return 0;
}