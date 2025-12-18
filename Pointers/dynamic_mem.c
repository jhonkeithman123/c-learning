#include <stdio.h>
#include <stdlib.h>

/**
 ** Make an array at runtime and I must use malloc() and free() to be able to complete it.
 */

/**
 * Upgrades:
 * Use calloc() instead of malloc() and observe how it initializes memory
 * Expand the array with realloc() to double the its size and continue progression.
 * Write a helper function fillArray(int *arr, int n, int val, int inc) to practice passing pointers
 */

void fillArray(int *arr, int n, int val, int inc);

int main()
{
    int n = 0;   // Number of elements in an array
    int val = 0; // Initial value of the array
    int inc = 0; // Incremental multiplier of the

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Tell me the initial value of the array: ");
    scanf("%d", &val);

    printf("Enter the increment size of the array: ");
    scanf("%d", &inc);

    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation for the arr variable failed, exiting...");
        exit(0);
    }

    fillArray(arr, n, val, inc);

    for (int i = 0; i < n; i++)
    {
        printf("*arr[%d] = %d\n", i, *(arr + i));
    }

    free(arr);

    return 0;
}

void fillArray(int *arr, int n, int val, int inc)
{
    arr[0] = val;
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] * inc;
    }
}