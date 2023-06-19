//convert string as integer
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000

int main(){
    long number;
    char str[MAX]={0}, *endptr;
    printf("Enter the number \n");
    fgets(str, sizeof(str),stdin);
    //gets(str);
    number=strtol(str, &endptr, 10);
    if(*endptr!='\0'&&*endptr!='\n')
        printf("Invalid Input\n");
    else
        printf("The int value is %ld\n",number);

    return 0;

}