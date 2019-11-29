#include<stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    
    if (a > b) {
        if (a > c) {
            printf("Maximum: %d\n", a);
        }
        else {
            printf("Maximum: %d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("Maximum: %d\n", b);
        }
        else {
            printf("Maximum: %d\n", c);
        }
    }
    return 0;
}