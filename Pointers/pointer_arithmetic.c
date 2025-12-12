#include <stdio.h>

void main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int *pArr = arr;

    for (int i = 0; i < size; i++) {
        printf("This is the size of the array using pointer: %d\n", *pArr);
        pArr++;
    }
    printf("Done!!\n");
}