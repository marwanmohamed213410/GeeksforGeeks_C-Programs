#include <stdio.h>

int main(){
    float f = 0;
    float c = 0;

    printf("Enter Temperature in Degree Farenheit: ");
    scanf("%f",&f);
    c = ((f) - 32) * 5/9;
    printf("Temperature in Degree Celsius : %0.2f\n",c);
    return 0;
}