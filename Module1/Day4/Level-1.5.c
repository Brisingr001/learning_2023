//Diff between even & odd indexed elements

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
        if(i%2==0)
            even+=*(arr+i);
        else   
            odd+=*(arr+i);
    }
    diff=abs(odd-even);
    printf("Even : %d\n",even);
    printf("Odd : %d\n",odd);
    printf("The difference is %d\n",diff);
    return 0;
}