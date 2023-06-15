#include <stdio.h>
#include <stdint.h> // For uint64_t

unsigned int printExponent(double x) {
    // Define a union to safely reinterpret the double value
    union {
        double value;
        uint64_t bits;
    } u;

    u.value = x;

    // Extract the exponent bits using bit manipulation
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