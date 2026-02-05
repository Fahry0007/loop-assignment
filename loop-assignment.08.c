#include<stdio.h>

int main() {
    int i, j, e;
    char star = '*';
    char space = ' ';

    printf("Enter Your number: ");
    scanf("%d", &e);

    int stars = 2 * e - 1;
    int spaces = 0;

    for(i = 1; i <= e; i++) {

        for(j = 1; j <= spaces; j++) {
            printf("%c", space);
        }


        for(j = 1; j <= stars; j++) {
            printf("%c", star);
        }

        printf("\n");
        stars = stars - 2;
        spaces = spaces + 1;
    }

}
