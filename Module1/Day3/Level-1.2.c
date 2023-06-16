// Prints Bits:
// Scan a 32bit integer and prints its bits.

// Concepts to be used.
// - Loops
// - Bitwise Operators


#include<stdio.h>

void convert(int temp){
    int arr[32]={0},i=0;

    if(temp==0)
        printf("0\n");

    while(temp>0){
        arr[i]=temp%2;
        temp/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",arr[j]);
}

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    convert(num);

    return 0;
}