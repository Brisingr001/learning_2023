#include"student.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int enter_data(student **tmp){
    int n;
    char i_p[50];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    getchar();
    *tmp=(student*)calloc(n,sizeof(student));
    for(int i=0;i<n;i++){
        printf("\t\tEnter details of student %d\n",i+1);
        fgets(i_p,sizeof(i_p),stdin);
        int r_no;
        char n_me[20];
        float m_rks;
        sscanf(i_p,"%d %s %f",&r_no, n_me, &m_rks);
        parse(*tmp, r_no, n_me, m_rks, i);

    }
    return n;
}

void parse(student *tmp,int r_no,char *n_me, float m_rks, int i){
    tmp[i].rollno=r_no;
    strncpy(tmp[i].name,n_me,sizeof(tmp[i].name)-1);
    tmp[i].marks=m_rks;
}

void initialize_data(student *tmp, int n) {
    // printf("Inside initialize_data function.\n");
    for (int i = 0; i < n; i++) {
    tmp[i].rollno = 0;
    tmp[i].marks = 0.0;
    memset(tmp[i].name, 0, sizeof(tmp[i].name));
    }
}

void display_data(student *tmp, int n) {
    // printf("Inside display_data function.\n");
    for(int i=0;i<n;i++){
        printf("--->Student %d details<---\n",i+1);
        printf("Roll no : %d\n",tmp[i].rollno);
        printf("Name    : %s\n",tmp[i].name);
        printf("Marks   : %0.2f\n\n",tmp[i].marks);
    }
}

void sort_data_marks(student *tmp, int n) {
    // printf("Inside sort_data_marks function.\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(tmp[j].marks < tmp[j+1].marks){
                student temporary_struct = tmp[j];
                tmp[j] = tmp[j + 1];
                tmp[j + 1] = temporary_struct;
            }
        }
    }
    display_data(tmp,n);
}

void search_name_data(student *tmp, int n) {
    // printf("Inside search_name_data function.\n");
    char s_name[20];
    printf("Enter the name of the student : ");
    scanf("%s",s_name);
    int flag=0;
    for(int i=0;i<n;i++){
        if(strcmp(s_name,tmp[i].name)==0){
        printf("Student details found!\n\n");
        printf("Roll no : %d\n",tmp[i].rollno);
        printf("Name    : %s\n",tmp[i].name);
        printf("Marks   : %0.2f\n\n",tmp[i].marks);
        flag=1;
        }
    }
    if(flag=0)
        printf("Student details not found in the database\n");
}
