//Toggle Case

#include<stdio.h>
#include<ctype.h>

#define MAX 10000

void togglecase(char *str){
    int i=0;
    while(str[i] != '\0'){
        if(islower(str[i]))
            str[i]=toupper(str[i]);
        else if (isupper(str[i]))
            str[i]=tolower(str[i]);

        i++;
        }
        
    }


int main(){
    char str[MAX];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    togglecase(str);

    printf("The toggled string is: %s",str);
    
    return 0;
}