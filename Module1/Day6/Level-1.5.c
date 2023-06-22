#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0)
            return i;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    struct Student* students = malloc(n * sizeof(struct Student));

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d \n",i+1);
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
        getchar();
    }

    char searchName[20];
    printf("\nEnter the name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int index = searchByName(students, n, searchName);
    if (index != -1) {
        printf("\nStudent found!\n");
        printf("Roll No: %d\n", students[index].rollno);
        printf("Name: %s\n", students[index].name);
        printf("Marks: %.2f\n", students[index].marks);
    } else {
        printf("\nStudent not found.\n");
    }

    free(students);
    return 0;
}