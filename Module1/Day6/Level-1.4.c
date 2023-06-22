
//4. Write a function to sort the array of structures in descending order based on marks 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int S2i(const char* str)
{
    int result = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}
float S2f(const char* str)
{
    float result = 0.0;
    int i = 0;
    while (str[i] != '\0' && str[i] != '.')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    if (str[i] == '.')
    {
        float f = 0.1;
        i++;
        while (str[i] != '\0')
        {
            result = result + (str[i] - '0') * f;
            f /= 10.0;
            i++;
        }
    }
    return result;
}
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void autoFill(const char* str, struct Student* s)
{
    int i = 0;
    char temp[20];
    int j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        temp[j++] = str[i++];
    }
    temp[j] = '\0';
    s->rollno = S2i(temp);
    if (str[i] == ' ')
        i++;
    j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        s->name[j++] = str[i++];
    }
    s->name[j] = '\0';
    if (str[i] == ' ')
        i++;

    j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        temp[j++] = str[i++];
    }
    temp[j] = '\0';
    s->marks = S2f(temp);
}
void sort(struct Student *s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].marks < s[j + 1].marks)
            {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void display(const struct Student *s, int n)
{
    printf("\nStudent details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 
    char data[100];
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n",i+1);
        fgets(data, sizeof(data), stdin);
        autoFill(data, &students[i]);
    }
    sort(students, n);
    printf("\nAfter sorting:\n");
    display(students, n);
    free(students);
    return 0;
}