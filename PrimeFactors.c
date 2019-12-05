#include<stdio.h>

int main() {

    int i = 0, j = 0, no = 0, flg = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    printf("Prime factors of %d are: ", no);
    
    for (i = 2; i <= no; i++) {
        if (no % i == 0) {
            flg = 1;
            for( j = 2; j < i; j++) {
                if(i % j == 0) {
                    flg = 0;
                    break;
                }
            }
            if (flg == 1)
                printf("%d\t", i);
        }
    }

    printf("\n");
    return 0;
}