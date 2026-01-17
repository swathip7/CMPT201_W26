/* CMPT 201: Lab #1
   digits.c: a simple C program that prints out the number of digits
   in an integer
*/

#include <stdio.h>

int main(void) {
    int digits = 0, number;

    printf("Please enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (number <= 0) {
        printf("Please enter an integer greater than 0!\n");
        return 1;
    }

    while (number > 0) {
        number /= 10;
        digits++;
    }

    printf("Number of digits: %d\n", digits);

    return 0;
}
