#ifndef DAY6_H
#define DAY6_H

typedef struct{
    int rollno;
    char name[20];
    float marks;
}student;

int enter_data(student **);

void initialize_data(student *, int);

void parse(student *,int, char *, float, int);

void display_data(student *, int);

void sort_data_marks(student *, int);

void search_name_data(student *, int);

#endif

