// Assume User will be providing input in the form of a string as show below. 
// Write a function to parse the string and initialize an array of structures. 

// Example String : "1001 Aron 100.00" 
// Example Structure : 
//     struct Student{
//         int rollno;
//         char name[20];
//         float marks;
//     };

// Note: User must be able define the no. of inputs/size of the array during runtime.

#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
int S2i(const char* str)
{
    int result=0;
    int i=0;
    while(str[i]!='\0')
    {
        result=result*10+(str[i]-'0');
        i++;
    }
    return result;
}
float S2f(const char* str)
{
    float result=0.00;
    int i=0;
    while (str[i]!='\0'&&str[i]!='.')
    {
        result=result*10+(str[i]-'0');
        i++;
    }
    if (str[i]=='.')
    {
        float f=0.1;
        i++;
        while (str[i]!='\0')
        {
            result=result+(str[i]-'0')*f;
            f/=10.0;
            i++;
        }
    }
    return result;
}


void autoFill(const char* str, struct Student* s)
{
    int i=0;
    char temp[20];
    int j=0;

    while (str[i]!=' '&&str[i]!='\0')
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
        temp[j++]=str[i++];
    }
    temp[j]='\0';
    s->marks=S2f(temp);
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar(); 
    char data[100];
    struct Student* students =(struct Student*)malloc(n * sizeof(struct Student));
    for (int i=0;i<n;i++)
    {
        printf("Enter details of student %d\n",i+1);
        fgets(data,sizeof(data),stdin);
        autoFill(data,&students[i]);
    }
    printf("\nStudent details:\n");
    for (int i=0;i<n;i++)
    {
        printf("\nRoll No: %d\n",students[i].rollno);
        printf("Name: %s\n",students[i].name);
        printf("Marks: %.2f\n",students[i].marks);
    }
    free(students);
    return 0;
}

