#include<stdio.h>

int main() {

    int a = 30;
    int b = 20;
    int i = 0;
    /*
        if (condition) {
            true statements;
        }
        else {
            false statements;
        }
    */

    if (a < b) {
        printf("a is less than b\n");
    }
    else if (a == b) {
        printf("a and b both are equal\n");
    }
    else {
        printf("a is greater than b\n");
    }

    if (a < b) {
        printf("a is less than b\n");
    }
    else {
        if (a == b) {
            printf("a and b both are equal\n");
        }
        else {
            printf("a is greater than b\n");
        }
    }

    // Loops
    /*
        initialisation;
        while(condition) {
            statements;
            incr/decr;
        }
    */

    i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            if (i == 2) {
                i++;
                continue;
            }
            printf("Codekul - ");
        }
        else {
            printf("The Gurukul for Coders!\n");
        }
        if (i == 5) {
            break;
        }        
        ++i;
    }

    return 0;
}