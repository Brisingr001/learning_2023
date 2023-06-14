// 4. Write a simple calculator program which should accept inputs in the same order.
//     - Operand 1
//     - Operator
//     - Operand 2
// The order of scan should be same, for example, you should first scan in the following order.
// printf("Enter Number1: );
// Scan the first number form the user.
// printf("Enter the operator: );
// Scan the operator from the user.
// printf("Enter Number2: );
// Scan the second number form the user.

#include<stdio.h>
float calc(float n1, char op, float n2){
    switch(op){
    case '+':
        return n1+n2;
    case '-':
        return n1-n2;
    case '*':
        return n1*n2;
    case '/':
        if(n2!=0)
            return n1/n2;
        else{
            printf("Cannot divide by 0\n");
            exit(0);
        }
    case '%':
        return (int)n1%(int)n2;
    default:
        printf("Invalid Operator\n");
        return 0;
         }
}

int main(){
    float num1,num2,result;
    char operator;
    printf("Enter Number 1\n");
    scanf("%f",&num1);
    printf("Enter the operator\n");
    scanf(" %c",&operator);
    printf("Enter Number 2\n");
    scanf("%f",&num2);
    result=calc(num1,operator,num2);
    printf("The result is %.4f",result);
    return 0;
}