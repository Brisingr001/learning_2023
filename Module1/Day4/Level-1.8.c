//compute total seconds
#include <stdio.h>
#include <stdlib.h>

int main() {
    char timestring[9];
    int hours, minutes, seconds, total;
    printf("Enter the time (hh:mm:ss)\n");
    fgets(timestring, sizeof(timestring), stdin);

    sscanf(timestring,"%d:%d:%d",&hours,&minutes,&seconds);
    total =hours*3600 +minutes*60 +seconds;
    printf("Total seconds: %d\n", total);

    return 0;
}
