#include <stdio.h>

void swap(int *x, int *y);

void main() {
    int x = 10;
    int y = 20;

    printf("Printing x and y before the swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After the swap: x = %d, y = %d\n", x, y);
}

void swap(int *x, int *y) {
    int temp;

    temp = *x;

    *x = *y;

    *y = temp;
}