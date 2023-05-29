#include <stdio.h>
int main()
{
    int value = 0;
    while (value <= 255)
    {
        printf("ASCII value: %d.....equivalent character:%c\n", value, value);
        value++;
    }
    return 0;
}