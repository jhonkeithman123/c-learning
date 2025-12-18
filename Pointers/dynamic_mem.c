#include <stdio.h>
#include <stdlib.h>

/**
 ** Make an array at runtime and I must use malloc() and free() to be able to complete it. 
 */
int main() {
    int n = 0;
    int val = 0;
    int inc = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Tell me the initial value of the array: ");
    scanf("%d", &val);

    printf("Enter the increment size of the array: ");
    scanf("%d", &inc);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Arr is null, returning... This will cause a segmentation fault.");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[0] == 0) {
            arr[i] = val;
        } else {
            arr[i] = val * inc;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    
    return 0;
}