// page no:21 F.a
#include <stdio.h>
int main()
{
    int bSalary;
    printf("enter your basic salary: ");
    scanf("%d", &bSalary);
    int dearness = (bSalary * 40) / 100;
    int rent = (bSalary * 20) / 100;
    int gSalary = dearness + rent + bSalary;
    printf("your gross salary: %d\n", gSalary);
    return 0;
}