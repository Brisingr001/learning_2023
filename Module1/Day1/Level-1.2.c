// 2. Write a program to print the grade of the given student using if else if block
//     - 90 to 100 -> "Grade A"
//     - 75 to 89 -> "Grade B"
//     - 60 to 74 -> "Grade C"
//     - 50 to 59 -> "Grade D"
//     - 0 to 49 -> "Grade F"
#include<stdio.h>
grade(int s){
    if(s>=90&&s<=100)
        printf("Grade A\n");
    else if (s>=75 && s<=89)
        printf("Grade B\n");
    else if (s>=60 && s<=74)
        printf("Grade C\n");
    else if (s>=50 && s<=59)
        printf("Grade D\n");
    else if (s>=0 && s<=49)
        printf("Grade F\n");
    else
        printf("Invalid score\n");
    
}
int main(){
    int score;
    printf("Enter the score\n");
    scanf("%d",&score);
    grade(score);
    return 0;
}