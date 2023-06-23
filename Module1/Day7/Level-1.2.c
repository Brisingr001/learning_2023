// Case Handler:
// Write a C program to copy a file by considering the user option to handle the text case
// -u, to change file content to Upper Case
// -l, to change file content to Lower Case
// -s, to change file content to Purely Upper Case
// if no options are passed then it should be a normal copy

// Example, say we have a file f1 with the following content
// f1:
// -----------------------
// This is the file data
// testing Case copy
// application
// -----------------------

// ./cp -s f1 f2
// f2:
// -----------------------
// This Is The Tile Data
// Testing Case Copy
// Application
// -----------------------

// ./cp -l f1 f3
// f3:
// -----------------------
// this is the tile data
// testing case copy
// application
// -----------------------

// ./cp -u f1 f4
// f4:
// -----------------------
// THIS IS THE FILE DATA
// TESTING CASE COPY
// APPLICATION
// -----------------------

// ./cp f1 f5
// Should perform a normal copy

#include<stdio.h>
#include<string.h>

void convertupper(char *);
void convertlower(char *);
void convertpureupper(char *);

int main(int argc, char *argv[]){
    if(argc<3){
        printf("Insufficient arguments. Please run the program again\n");
        return 2;
    }
    char *option=argv[1], *srcfile=argv[2], *dstfile=argv[3];
    FILE *fs, *fd;
    fs=fopen(srcfile,"r");
    fd=fopen(dstfile,"w");
    if(fs==NULL){
        printf("Error opening 1 %s\n",srcfile);
        return 1;
    }
    if(fd==NULL){
        printf("Error opening 2 %s\n");
        fclose(fs);
        return 1;
    }
    char buffer[200];
    size_t bytes;
    while((bytes=fread(buffer,1,sizeof(buffer),fs))>0){
        if(strcmp(option,"-u")==0){
            convertupper(buffer);
            fwrite(buffer,1,bytes,fd);
        }
            
        else if(strcmp(option,"-l")==0){
            convertlower(buffer);
            fwrite(buffer,1,bytes,fd);
        }
            
        else if(strcmp(option,"-s")==0){
            convertpureupper(buffer);
            fwrite(buffer,1,bytes,fd);
        }
            
        else if(strcmp(option," ")==0){
            fwrite(buffer,1,bytes,fd);
        }
        else{
            printf("Invalid option!. Exiting\n");
            return 0;
        }
            
    }

 printf("File copied successfully. Option passed was %s. Exiting\n",option);
 fclose(fs);
 fclose(fd);

 return 0;

}

void convertupper(char *str){
    while(*str){
        if(*str>='a' && *str<='z')
            *str = *str - ('a'-'A');
        str++;
    }
}

void convertlower(char *str){
    while(*str){
        if(*str>='A'&& *str<='Z')
            *str= *str + ('a'-'A');
        str++;
    }
}

void convertpureupper(char *str)
{
    int cap = 1;
    while (*str)
    {
          if (*str == ' ')
            {
                 cap=1;
                    str++;
            }
            if (cap && (*str >= 'a' && *str <= 'z'))
            {
                *str = *str - ('a' - 'A');
                cap = 0;
            }
            else if (!cap && (*str >= 'A' && *str <= 'Z'))
            {
                *str = *str + ('a' - 'A');
            }
            str++;
        }  
    }