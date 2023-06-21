// Write a C program that uses functions to perform the following operations: 
//      i) Reading a complex number 
//      ii) Writing a complex number 
//      iii) Addition of two complex numbers 
//      iv) Multiplication of two complex numbers 
// (Note: represent complex number using a structure).

/*#include<stdio.h>
#include<complex.h>

typedef struct{
    float x;
    float y;
}cmplx;

int main(){

float a,b;
printf("Enter the real and imaginary part of the complex number (a b) : ");
scanf("%f %f",&a,&b);


}

*/



    #include<stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

void readComplex(Complex *c) {
    printf("Enter the real and imaginary part of the complex number (a b): ");
    scanf("%f %f", &(c->real), &(c->imaginary));
}

void writeComplex(const Complex *c) {
    printf("Complex number: %.2f + %.2fi\n", c->real, c->imaginary);
}

Complex addComplex(const Complex *c1, const Complex *c2) {
    Complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}

Complex multiplyComplex(const Complex *c1, const Complex *c2) {
    Complex result;
    result.real = (c1->real * c2->real) - (c1->imaginary * c2->imaginary);
    result.imaginary = (c1->real * c2->imaginary) + (c1->imaginary * c2->real);
    return result;
}

int main() {
    Complex c1, c2, sum, product;

    // Read two complex numbers
    readComplex(&c1);
    readComplex(&c2);

    // Write the two complex numbers
    printf("Complex Number 1:\n");
    writeComplex(&c1);
    printf("Complex Number 2:\n");
    writeComplex(&c2);

    // Perform addition of two complex numbers
    sum = addComplex(&c1, &c2);
    printf("Sum of two complex numbers:\n");
    writeComplex(&sum);

    // Perform multiplication of two complex numbers
    product = multiplyComplex(&c1, &c2);
    printf("Product of two complex numbers:\n");
    writeComplex(&product);

    return 0;
}
