#include <stdio.h>
#include "math.h"
#define M_PI 3.14159265358979323846

int main()
{
    double l1, l2, g1, g2, D;

    printf("Enter L1: ");
    scanf("%lf", &l1);
    printf("Enter L2: ");
    scanf("%lf", &l2);
    printf("Enter G1: ");
    scanf("%lf", &g1);
    printf("Enter G2: ");
    scanf("%lf", &g2);

    l1 = l1 * (M_PI / 180.0); // Convert l1 from degrees to radians
    l2 = l2 * (M_PI / 180.0); // Convert l2 from degrees to radians
    g1 = g1 * (M_PI / 180.0); // Convert g1 from degrees to radians
    g2 = g2 * (M_PI / 180.0); // Convert g2 from degrees to radians

    D = 3963 * acos((sin(l1) * sin(l2)) + (cos(l1) * cos(l2) * cos(g1 - g2)));
    printf("Output distance between them in nautical miles is: %lf", D);

    return 0;
}
