#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {
    // currently this loop reads character by character
    // how can we change it to print line by line?
    char my_arr[MAX_LETTERS];
    
    while (fgets(my_arr, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_arr);
    }

    return 0;
}
