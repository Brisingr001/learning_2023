// Sum & Average of 1D Array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,sum=0,avg;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    int*arr=(int *)calloc(n, sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        sum+=*(arr+i);
    }
    avg=sum/n;
    printf("The sum is %d\n",sum);
    printf("The average is %d\n",avg);
    return 0;
        


}