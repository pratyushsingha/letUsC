#include <stdio.h>

int main() {
    int h, cc, t;
    
    printf("Enter the value of hardness: ");
    scanf("%d", &h);
    
    printf("Enter the value of carbon content: ");
    scanf("%d", &cc);
    
    printf("Enter the value of tensile: ");
    scanf("%d", &t);

    if (h > 50 && cc < 0.7 && t > 5600) {
        printf("Grade 10\n");
    } else if (h > 50 && cc < 0.7) {
        printf("Grade 9\n");
    } else if (cc < 0.7 && t > 5600) {
        printf("Grade 8\n");
    } else if (h > 50 && t > 5600) {
        printf("Grade 7\n");
    } else if (h > 50 || cc < 0.7 || t > 5600) {
        printf("Grade 6\n");
    } else {
        printf("Grade 5\n");
    }

    return 0;
}
