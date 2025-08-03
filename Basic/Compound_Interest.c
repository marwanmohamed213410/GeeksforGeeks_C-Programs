# include <stdio.h>
# include <math.h>

int main() {
    float principal, rate, time;

    printf("enter principal amount: ");
    scanf("%f",&principal);
    printf("enter rate: ");
    scanf("%f",&rate);
    printf("enter time span: ");
    scanf("%f",&time);

    // Amount= P(1 + R/100)t
    float amount = principal * pow((1 + rate/100),time);
    float Compound_Interest = amount - principal;
    printf("Compound Interest = %.2f",Compound_Interest);

    return 0;
}