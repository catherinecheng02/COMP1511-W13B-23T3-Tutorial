// Arrays demo 
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
#define SIZE 5

int main(void) {
    // What is an array?
    // collection of variables of the same data type 

    // How do we initialise an array?
    int my_array[SIZE] = {3, 4, 7, 0, 4};

    int my_array2[SIZE] = {0};
    int my_array3[100];
    int i = 0;
    while (i < 100) {
        my_array3[i] = 1;
        i++;
    }
    

    // How do we print out an array?
    int j = 0;
    while (j < 100) {
        printf("%d\n", my_array3[j]);
        j++;
    }
    
    
    
    return 0;
}
