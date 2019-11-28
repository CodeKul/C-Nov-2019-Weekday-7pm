#include<stdio.h>

int main() {

    int a;
    float b;
    char c;

    printf("Enter a int number: ");
    scanf("%d", &a);

    printf("Enter a float number: ");
    scanf("%f", &b);

    printf("Enter a char number: ");
    scanf(" %c", &c);

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);

    return 0;
}