#include <stdio.h>
#include <stdlib.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-----------------------\n");
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student* students = malloc(n * sizeof(struct Student));

    displayStudents(students, n);

    free(students);
    return 0;
}
