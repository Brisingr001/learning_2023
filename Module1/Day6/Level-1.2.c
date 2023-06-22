#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int n) {
    for (int i = 0; i < n; i++) {
        students[i].rollno = 0;
        students[i].marks = 0.0;
        memset(students[i].name, 0, sizeof(students[i].name));
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 

    struct Student* students = calloc(n, sizeof(struct Student));
    initializeStudents(students, n);

    printf("\nInitialized student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-----------------------\n");
    }

    free(students);
    return 0;
}
