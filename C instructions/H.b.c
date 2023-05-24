#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        reversedNumber=reversedNumber*10+number%10;
        number/=10;
    }
    
    printf("Reversed number: %d\n", reversedNumber);
    
    return 0;
}
