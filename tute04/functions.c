// Simple squaring function demo
// Written by Catherine Cheng z5310517
#include <stdio.h>

int square_num(int x);

int main(void) {
    int num = 2;
    square_num(num);
    return 0;
}

//defining function
int square_num(int x) {
    return x*x;
}
