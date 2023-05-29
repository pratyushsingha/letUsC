#include <stdio.h>
#include <math.h>
int main()
{
    float R, G, B, white, cyan, magenta, yellow, black;
    printf("enter the value of red(R): ");
    scanf("%f", &R);
    printf("enter the value of green(G): ");
    scanf("%f", &G);
    printf("enter the value of blue(B): ");
    scanf("%f", &B);
    if (R == 0 && G == 0 && B == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
        white = fmax(R / 255, fmax(G / 255, B / 255));
        cyan = (white - (R / 255)) / white;
        magenta = (white - (G / 255)) / white;
        yellow = (white - (B / 255)) / white;
        black = 1 - white;
    }
    printf("cyan = %.2f\n", cyan);
    printf("magenta = %.2f\n", magenta);
    printf("yellow = %.2f\n", yellow);
    printf("black = %.2f\n", black);
    

    return 0;
}