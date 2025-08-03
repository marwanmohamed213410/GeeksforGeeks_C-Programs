#include <stdio.h>

int main() {
    char c;
    
    printf("Enter your character: ");
    scanf("%s",&c);
    printf("ASCII value of %c is %d",c,c);
    return 0;
}