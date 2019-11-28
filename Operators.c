#include<stdio.h>

int main() {

    // Assignment
    /*
        =
    */
    int a = 10;
    int b = 20;
    int c = 0;

    // Arithmetic
    /*
        +
        -
        *
        /
        %
    */

    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a % b;

    // Compound assignment
    /*
        +=
        -=
        *=
        /=
        %=
    */

    a += b;     // a = a + b
    a -= b;     // a = a - b
    a *= b;


    // Comparision
    /*
        <
        >
        <=
        >=
        ==
        !=
    */

    a = 10;
    b = 10;

    c = a >= b;

    // Logical
    /*
        &&
        ||
        !
        p   q   &&  ||  !p
        0   0   0   0   1
        0   1   0   1   1
        1   0   0   1   0
        1   1   1   1   0
    */

    c = !(a == 10 || b == 20);

    // Ternary
    /*
        var = condition ? true part : false part;
    */
    c = a > b ? 10 : 20;
    // printf("c: %d\n",c);

    // Incr/Decr
    /*
        a++     post incr
        ++a     pre incr
        a--     post decr
        --a     pre decr
    */

    printf("%d\n", a++);
    printf("%d\n", ++a);
    printf("%d\n", a--);
    printf("%d\n", --a);

    return 0;
}