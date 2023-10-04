// Scanning fixed number of inputs into array
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
int main(void) {
    // we will write a program that will keep scanning in values until
    // the user presses CTRL + D
    int input;
    int array[100] = {0};
    int i = 0;
    while (scanf("%d", &input) == 1) {
        array[i] = input;
        i++;
    }


    int j = 0;
    while (j < 100) {
        printf("%d\n", array[j]);
        j++;
    }

    
}
