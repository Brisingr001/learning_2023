// 2. Write a program to swap any type of data passed to an function.

// Topics to be covered
// - Pointers
// - Type Casting

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000

void swap(void *element_a ,void *element_b, size_t size){
    char* temp =(char*)malloc(size);
    memcpy(temp, element_a, size);
    memcpy(element_a, element_b, size);
    memcpy(element_b, temp, size);
}
int main(){
    int inum1, inum2;
    float fnum1, fnum2;
    char char1, char2;
    
    
    printf("Enter two integers");
    scanf("%d %d",&inum1, &inum2);
    
    printf("Before swapping:\n");
    printf("int1 = %d, int2 = %d\n", inum1, inum2);
    
    swap(&inum1, &inum2, sizeof(int));
    
    printf("\nAfter swapping:\n");
    printf("int1 = %d, int2 = %d\n", inum1, inum2);

    
    printf("Enter two floats");
    scanf("%f %f",&fnum1, &fnum2);
    
    printf("Before swapping:\n");
    printf("float1 = %.2f, float2 = %.2f\n", fnum1, fnum2);
    
    swap(&fnum1, &fnum2, sizeof(float));
    
    printf("After swapping:\n");
    printf("float1 = %.2f, float2 = %.2f\n", fnum1, fnum2);

    
    printf("Enter two char");
    scanf(" %c %c",&char1, &char2);
    
    printf("Before swapping:\n");
    printf("char1 = %c, char2 = %c\n", char1, char2);

    swap(&char1, &char2, sizeof(char));

    printf("After swapping:\n");
    printf("char1 = %c, char2 = %c\n", char1, char2);
    return 0;
}