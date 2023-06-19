//Reverse the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int *arr=(int *)calloc(n, sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("The array elements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    int temp;
    for(int s=0, l=n-1;l>s;s++,l--){
        temp= *(arr+s);
        *(arr+s)=*(arr+l);
        *(arr+l) = temp;
    }
    printf("\nThe reversed elements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}