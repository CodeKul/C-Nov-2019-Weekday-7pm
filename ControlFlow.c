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

    /*
        initialisation
        do {
            statements;
            incr/decr
        }while(condition);
    */

    i = 0;
    do {
        printf("Codekul123\n");
        if (i == 3){
            // continue;
        }
        i++;
    }while(i < 10);

    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
    */

    for (i = 0; i < 10; i++);
    printf("i: %d\n", i);
    {
        printf("Codekul\n");
        if (i == 3){
            // break;
        }
    }

    return 0;
}