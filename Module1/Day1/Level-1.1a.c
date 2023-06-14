// 1. Write a function to find biggest of 2 numbers using 
//     - if else
#include<stdio.h>

greater(int a, int b)
{
     if(a>b)
         return a;
     else
         return b;      
}
int main()
{
 int num1,num2,result;
 printf("Enter the two numbers\n");
 scanf("%d %d",&num1, &num2);
 result = greater(num1,num2);
 printf("%d is the biggest number",result);
 return 0;   
}

