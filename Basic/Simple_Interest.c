#include <stdio.h>

int main() {
    float Principal, Rate, Time;

    printf("Enter Principal: ");
    scanf("%f",&Principal);
    printf("Enter Rate: ");
    scanf("%f",&Rate);
    printf("Enter Time: ");
    scanf("%f",&Time);
    float Simple_Interest = Principal * Rate * Time / 100;
    printf("Simple Interest = %.2f",Simple_Interest);
    
}