#include<stdio.h>

void my_function() {
    printf("This is my function\n");
    return;
}

int main() {

    // void my_function();
    void function_with(int, int, char, float);
    int function_returning(int, int);
    int a = 20;
    int b = 30;
    int c = 0;

    my_function();
    
    function_with(a, b, 'A', 10.23);

    c = function_returning(a, b);
    printf("c: %d\n", c);

    return 0;
}

void function_with(int param1, int param2, char param3, float param4) {
    printf("param1: %d\n", param1);
    printf("param2: %d\n", param2);
    printf("param3: %c\n", param3);
    printf("param4: %f\n", param4);
    return;
}

int function_returning(int x, int y) {
    int res = x + y;
    return res;
}