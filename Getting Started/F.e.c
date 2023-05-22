#include <stdio.h>
int main()
{
    int l, b, r;
     printf("Enter the length & breath of the rectangle: ");
     scanf("%d %d", &l, &b);
     printf("Enter the radius of the circle: ");
     scanf("%d", &r);

        int area = l * b;
        int perimeter = 2 * (l + b);
        float area_of_circle = 3.14 * r * r;
        float circumference = 2 * 3.14 * r;

        printf("The area of the rectangle is: %d\n", area);
        printf("The perimeter of the rectangle is: %d\n", perimeter);
        printf("The area of the circle is: %0.2f\n", area_of_circle);
        printf("The circumference of the circle is: %.2f\n", circumference);
return 0;
}