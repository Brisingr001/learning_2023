//Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

typedef struct{
    int x;
    int y;
}str;

void swap_fields(str* ptr1, str* ptr2){

    int temp1 = ptr1->x;
    int temp2 = ptr1->y;

    ptr1->x = ptr2->x;
    ptr1->y = ptr2->y;

    ptr2->x = temp1;
    ptr2->y = temp2;
}

int main(){
    str str1,str2;

    printf("Enter the value of x and y in struct 1 : ");
    scanf("%d %d",&(str1.x),&(str1.y));

    printf("Enter the value of x and y in struct 2 : ");
    scanf("%d %d",&(str2.x),&(str2.y));

    printf("\nBefore swapping:\n");
    printf("struct 1: (%d,%d)\n",str1.x,str1.y);
    printf("struct 2: (%d,%d)\n",str2.x,str2.y);

    swap_fields(&str1,&str2);

    printf("\nAfter swapping:\n");
    printf("struct 1: (%d,%d)\n",str1.x,str1.y);
    printf("struct 2: (%d,%d)\n",str2.x,str2.y);

    return 0;
}
