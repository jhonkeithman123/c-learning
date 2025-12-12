#include <stdio.h>

void main() {
    char *arr[] = {"Keith", "Justine", "Virgenes", NULL}; 
    
    for (int i = 0; ; i++) {
        
        if (arr[i] == NULL) {
            printf("The array will stop now.\n");
            break;
        }

        printf("Will print the names: %s\n", arr[i]);
    }
}