#include <stdio.h>

int main() {
    float num1,num2;
    
    printf("Enter num1: ");
    scanf("%f", &num1);

    printf("Enter num2: ");
    scanf("%f", &num2);

    printf("Result: %.2f", num1*num2);
    return 0;
}