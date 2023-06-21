// write a program to Store Data for n students in Structures Dynamically. 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int age;
    float grade;
} student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    student *students=(student *)malloc(n * sizeof(student));

    for (int i = 0; i < n; i++){
        printf("\nStudent %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &(students[i].age));
        printf("Enter grade: ");
        scanf("%f", &(students[i].grade));
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
