// Write a program to sum every alternate elements of a given array starting for element 0
// For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

// Topics to be covered
// - Arrays
// - Loops
// - Basic Operators

#include<stdio.h>
#define MAX 10000
int main(){
    int arr[MAX]={0},ele,*ptr,sum=0;
    ptr=arr;
    printf("Enter the number of elements\n");
    scanf("%d",&ele);
    printf("Enter the array elements\n");
    for(int i=0;i<ele;i++)
        scanf("%d",&arr[i]);
    for(int j=0;j<=ele;j+=2)
    {
        sum+=*(ptr+j);
    }
    printf("Result is %d\n",sum);
    return 0;
}