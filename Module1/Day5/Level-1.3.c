// Write a program using structures to calculate the difference 
// between two time periods using a user-defined function
#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

time gettimedifference(const time *t1, const time *t2) {
    time difference;
    int totalSeconds1 = t1->hours * 3600 + t1->minutes * 60 + t1->seconds;
    int totalSeconds2 = t2->hours * 3600 + t2->minutes * 60 + t2->seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    time starttime, endtime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(starttime.hours), &(starttime.minutes), &(starttime.seconds));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endtime.hours), &(endtime.minutes), &(endtime.seconds));

    difference = gettimedifference(&starttime, &endtime);

    printf("The difference between the two time periods is: %02d:%02d:%02d\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
