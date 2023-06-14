// 5. Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
//     - Set 1st bit, if operation type is 1
//     - Clear 31st bit, if operation type is 2
//     - Toggle 16th bit, if operation type is 3
//    You can consider the below function prototype,
//     - bit_operations(int num, int oper_type);

#include<stdio.h>
int bit_operations(int num, int oper_type){
    int result;
    if (oper_type==1)
        result = num | (1<<0);
    else if (oper_type==2)
        result = num & ~(1<<31);
    else if(oper_type==3)
        result = num ^ (1<<15);
    else{
        printf("Invalid Operator\n");
        return 0;
    }
    return result;
}

int main(){
   
    int number,operator,answer;
    printf("Enter the number\n");
    scanf("%d",&number);
    printf("Enter the operator\n");
    scanf("%d",&operator);
    answer=bit_operations(number,operator);
    printf("Answer is %d",answer);
    return 0;

}