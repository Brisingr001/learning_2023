// Write a C program that uses functions to perform the following operations: 
//      i) Reading a complex number 
//      ii) Writing a complex number 
//      iii) Addition of two complex numbers 
//      iv) Multiplication of two complex numbers 
// (Note: represent complex number using a structure).

#include<stdio.h>

typedef struct{
    float real;
    float imaginary;
}complex;

void readcomplex(complex *c){
    printf("Enter the real and imaginary part of the complex number (a b): ");
    scanf("%f %f", &(c->real), &(c->imaginary));
}

void writecomplex(const complex *c){
    printf("Complex number: %.2f + %.2fi\n", c->real, c->imaginary);
}

complex addcomplex(const complex *c1, const complex *c2){
    complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}

complex multiplycomplex(const complex *c1, const complex *c2){
    complex result;
    result.real = (c1->real * c2->real) - (c1->imaginary * c2->imaginary);
    result.imaginary = (c1->real * c2->imaginary) + (c1->imaginary * c2->real);
    return result;
}

int main(){
    complex c1, c2, sum, product;

    readcomplex(&c1);
    readcomplex(&c2);

    printf("Complex Number 1:\n");
    writecomplex(&c1);
    printf("Complex Number 2:\n");
    writecomplex(&c2);

    sum = addcomplex(&c1,&c2);
    printf("Sum of two complex numbers:\n");
    writecomplex(&sum);

    product = multiplycomplex(&c1,&c2);
    printf("Product of two complex numbers:\n");
    writecomplex(&product);

    return 0;
}
