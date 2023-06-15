// Write a program to find total number of bits set in a given array.
// Say we have a array of 3 elements
// a[3] = {0x1, 0xF4, 0x10001};
// The total number of set bits in the given array is
// 1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

// Topics to be covered
// - Arrays
// - Loops
// - Bitwise Operators

#include<stdio.h>
#define MAX 10000
int set_bits(unsigned int *arr, int num){
    int result=0;
    for(int j=0;j<num;j++){
        int temp= arr[j];
        while(temp!=0){
            result+=temp&1;
            temp>>=1;
        }
    }
    return result;
}

int main(){
    unsigned int arr[MAX]={0};
    int tot=0,ele;
    printf("Enter the number of elements\n");
    scanf("%d",&ele);
    printf("Enter the elements\n");
    for(int i=0;i<ele;i++)
        scanf("%x",&arr[i]);
    tot=set_bits(arr,ele);
    printf("The total number of 1's is %d",tot);
    return 0;

}