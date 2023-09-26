// Week 2 Code Demo
// Written by Catherine Cheng 
// Write a short program which:
//- Scans in two integers (a and b).
// - If the first integer is less than the second, prints out a short error message.
// - If the second integer is 0, prints out a short error message.
// - If the first integer is larger than the second, prints a / b and (a * 1.0) / (b * 1.0).

#include <stdio.h>

int main (void) {
    int a;
    int b;
    scanf("%d", &a); // & stands for address of 
    scanf("%d", &b);

    // note in this solution, a maximum of one print error statement will run. 
    // if we want multiple to print, eg. in the case where a = -5 and b = 0,
    // change the else if on line 22 to an if statement
    if (a < b) {
        printf("first integer is less than second oops\n");
    } else if (b == 0) {
        printf("second integer cannot be 0 oops\n");
    } else if (a > b) {
        printf("%d\n", a/b);
        printf("%lf", (a * 1.0) / (b * 1.0));
    } else {
        //print something here
    }
    return 0;
}
