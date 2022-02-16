#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    time_t s, val = 1;
    struct tm *current_time;
 
    while(1)
    {
        system("clear");
        
        s = time(NULL);
     
        current_time = localtime(&s);
        
        int hour = current_time->tm_hour; 
        int min = current_time->tm_min; 
        int sec = current_time->tm_sec;
        
        printf("%02d : %02d : %02d", hour, min, sec);
        
        fflush(stdout);
        
        sleep(1);   
    }
}