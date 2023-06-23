// Data Viewer:
// Write an application to view the log stored in data.csv
// Example, say you have the following data in data.csv

// ------------------------------------

// EntryNo,sensorNo,Temperature,Humidity,Light,

// 1,S1,36.5,100,50,10:30:50
// 2,S3,30,100,50,10:30:55
// 3,S2,-6.6,100,10,10:31:00
// ------------------------------------

// a. Write a function to extract each line in the .csv file and store it in an array of structures. 

// b. Also implement functions to display the contents of the array of structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Log 
{
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

int extractLog(const char *filename, struct Log *data)
{
    FILE* file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Unexpected error");
        return 0;
    }
    char line[100];
    int count = 0;
    while (fgets(line, sizeof(line), file) != NULL) 
    {
        if (strstr(line, "EntryNo") != NULL)
            continue;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]", &data[count].entryNo,
               data[count].sensorNo, &data[count].temperature,
               &data[count].humidity, &data[count].light, data[count].time);
        count++;
    }
    fclose(file);
    return count;
}
void displayLog(struct Log* data, int count)
{
    printf("Log Entries:\n");
    printf("-----------------------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("-----------------------------------------------------------------\n");
    for (int i = 1; i <= count; i++) 
    {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", data[i].entryNo, data[i].sensorNo,
               data[i].temperature, data[i].humidity, data[i].light, data[i].time);
    }
    printf("-----------------------------------------------------------------\n");
}
int main()
{
    struct Log data[300];
    int count = extractLog("sensor_data.csv", data);

    if (count > 0) 
    {
        displayLog(data, count);
    }
    return 0;
}