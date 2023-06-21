// 3. Write a program to read the 
//     - Roll No
//     - Name (Note, you should read full name of the student including initials)
//     - Marks of Physics, Math and Chemistry
//     Calculate the total, percentage and print the summary.
#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float phy;
    float math;
    float chem;
};
typedef struct student student;
void summary(student s1){
    float total=s1.phy+s1.chem+s1.math;
    float percentage=total/3;
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s", s1.name);
    printf("Physics Marks: %.2f\n", s1.phy);
    printf("Math Marks: %.2f\n", s1.math);
    printf("Chemistry Marks: %.2f\n", s1.chem);
    printf("Total Marks: %.2f/300\n", total);
    printf("Percentage: %.2f%%\n", percentage);
}
int main(){ 
    student s1;
    printf("Enter the name\n");
    fgets(s1.name,100,stdin);
    printf("Enter the roll number\n");
    scanf("%d",&s1.rollno);
    printf("Enter the physics score\n");
    scanf("%f",&s1.phy);
    printf("Enter the chemistry score\n");
    scanf("%f",&s1.chem);
    printf("Enter the maths score\n");
    scanf("%f",&s1.math);
    printf("The summary is as follows\n\n");
    summary(s1);
    return 0;
}

