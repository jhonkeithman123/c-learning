#include <stdio.h>

void main() {
    int x = 10;
    int *pX = &x;

    printf("This is the value of x: %d\n", x);
    printf("Address of the x is %p\n", &x);
    
    printf("While this is the value of *pX: %d\n", *pX);
    printf("The address of *pX is %p\n", pX);
}