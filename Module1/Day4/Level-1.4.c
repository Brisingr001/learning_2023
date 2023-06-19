// Diff between even & odd elements
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,even=0,odd=0,diff=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int *arr=(int *)calloc(n, sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        if(*(arr+i)%2==0)
            even+=*(arr+i);
        else   
            odd+=*(arr+i);
    }
    diff=abs(odd-even);
    printf("The difference is %d\n",diff);
    return 0;
}