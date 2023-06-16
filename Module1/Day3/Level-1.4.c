// Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

// Concepts to be used.
// - Loops
// - Operators


#include<stdio.h>

int Three_digit(int num){
    int arr[4]={0},new_num[4]={0};
    for(int i=3;i>=0;i--){
        arr[i]=num%10;
        num/=10;
    }
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            if (k!= j)
                new_num[j]=new_num[j]*10+arr[k];
        }
    }
    int flag1=(new_num[0]>new_num[1])?new_num[0]:new_num[1];
    int flag2=(new_num[2]>new_num[3])?new_num[2]:new_num[3];
    int final=flag1>flag2?flag1:flag2;
    return final;
}

int main(){
    int number;
    printf("Enter the 4 digit number\n");
    scanf("%d",&number);
    if(number>=1000 && number <9999){
        int greatest= Three_digit(number);
        printf("Greatest three digit number is %d",greatest);
    }
        
    else
        printf("%d does not lie in between 1000 and 9999.Exiting\n",number);
    return 0;

}