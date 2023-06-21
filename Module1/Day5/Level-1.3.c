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
    int totalseconds1 = t1->hours * 3600 + t1->minutes * 60 + t1->seconds;
    int totalseconds2 = t2->hours * 3600 + t2->minutes * 60 + t2->seconds;
    int diffseconds = totalseconds2 - totalseconds1;

    difference.hours = diffseconds / 3600;
    difference.minutes = (diffseconds % 3600) / 60;
    difference.seconds = (diffseconds % 3600) % 60;

    return difference;
}

int main() {
    time starttime, endtime, difference;

    printf("Enter the start time (h m s): ");
    scanf("%d %d %d",&(starttime.hours),&(starttime.minutes),&(starttime.seconds));

    printf("Enter the end time (h m s): ");
    scanf("%d %d %d",&(endtime.hours),&(endtime.minutes),&(endtime.seconds));

    difference = gettimedifference(&starttime,&endtime);

    printf("The difference is: %02d:%02d:%02d\n",difference.hours,difference.minutes,difference.seconds);

    return 0;
}
