
// 1. Assume User will be providing input in the form of a string as show below. 
// Write a function to parse the string and initialize an array of structures. 

// Example String : "1001 Aron 100.00" 
// Example Structure : 
//     struct Student{
//         int rollno;
//         char name[20];
//         float marks;
//     };

// Note: User must be able define the no. of inputs/size of the array during runtime.

// 2. Write a function to initialize all members in the above array of structures

// 3. Write a function to display all members in the above array of structures

// 4. Write a function to sort the array of structures in descending order based on marks 

// 5. Write a function to perform a search operation on the array of structures based on name of the student

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"student.h"




int main(){
    student *s1=NULL;
    int option;
    while(1){
        printf("Option Details: 1--> Enter details and parse data to the structs\n");
        printf("                2--> Initialize all members in the array of structures\n");
        printf("                3--> Display all members in above aray of structures\n");
        printf("                4--> Sort the array of structs based on marks\n");
        printf("                5--> Search details based on name\n");
        printf("                6--> Exit the program\n\n");
        printf("Enter the option : ");
        scanf("%d",&option);
        int s_no;
        switch(option){
            case 1:
                s_no=enter_data(&s1);
                break;
            case 2:
                initialize_data(s1,s_no);
                break;
            case 3:
                display_data(s1,s_no);
                break;
            case 4:
                sort_data_marks(s1,s_no);
                break;
            case 5:
                search_name_data(s1,s_no);
                break;
            case 6:
                printf("Exiting\n");
                free(s1);
                exit(0);
            default:
                printf("Invalid option. Please enter the relevant option\n");
                break;
        }
    }
    return 0;

    
}