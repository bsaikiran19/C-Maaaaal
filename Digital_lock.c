#include <stdio.h>
#include <time.h>   //time function use krne ke liye
#include <unistd.h> //sleep krne ke liye
#include <stdlib.h> //for using system function
int format;
void fill_time(char *, int);
void fill_date(char *);
void input_format();
void clear_scr();
int main()
{
    char time[50], date[100];
    input_format();
    while (1)
    {
        fill_time(time, format);
        fill_date(date);
        clear_scr();
        printf("Current Time: %s\n", time);
        printf("Date: %s\n", date);
        sleep(1); // sleep for 1sec
    }
    return 0;
}

void input_format()
{
    int format;
    printf("Choose the time format: \n");
    printf("\n 1. 24 Hour Format");
    printf("\n 2. 12 Hour Format");
    printf("\n Make the choice: ");
    scanf("%d", &format);
}

void fill_time(char *buffer, int format)
{
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {
        strftime(buffer, 50, "%H:%M:%S ", current_time);
    }
    else
    {
        strftime(buffer, 50, "%I:%M:%S %p", current_time);
    }
}

void fill_date(char *buffer)
{
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer, 50, "%A %d %B,%Y ", current_time);
}

void clear_scr()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear")
#endif
}