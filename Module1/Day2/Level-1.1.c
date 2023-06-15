// Write a program to print exponent part of double variable in hexadecimal and binary format.
// lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
// You may use the below link to validate you output
// https://baseconvert.com/ieee-754-floating-point

// Topics to be covered
// - Pointers
// - Bitwise Operators


#include <stdio.h>
#include <stdint.h> 

unsigned int printExponent(double x) {
    union {
        double value;
        uint64_t bits;
    } u;

    u.value = x;
    unsigned int exponent = (u.bits >> 52) & 0x7FF;

    return exponent;
}

int main() {
    double x;
    unsigned int result;
    printf("Enter the number: ");
    scanf("%lf", &x);
    result = printExponent(x);
    printf("bruh Exponent part of %lf in hex is 0x%x\n", x, result);
     printf("Exponent part of %lf in binary is 0x%b\n", x, result);
    return 0;
}
