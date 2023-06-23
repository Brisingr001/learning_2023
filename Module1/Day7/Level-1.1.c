// File Copy: Write a C program to copy a file using file operations

#include<stdio.h>
int main(){
    FILE *fp, *fs;
    fp=fopen("hello.txt", "r");
    char buffer[100];
    size_t bytes;
    fs = fopen("copy.txt", "w");
    if(fp==NULL){
        printf("Unexpected Error\n");
        return 1;
    }
    if(fs==NULL){
        printf("Unexpected Error\n");
        fclose(fp);
        return 1;
    }
    while((bytes=fread(buffer,1,sizeof(buffer),fp))>0)
        fwrite(buffer,1,bytes,fs);
    printf("File copied successfully!. Exiting\n");
    fclose(fp);
    fclose(fs);
}