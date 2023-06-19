// Min & Max of 1D Array

#include<stdio.h>
#include<stdlib.h>



int main()
{
    int n,greater,lesser;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    greater=lesser= *arr;
    for (int j=1; j<n; j++){
         if(greater < *(arr+j))
            greater= *(arr+j);
        if (lesser > *(arr+j))
            lesser= *(arr+j);
    }
       
    printf("Greater number is %d\n",greater);
    printf("Lesser number is %d",lesser);
    return 0;
}