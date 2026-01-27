//second to day 2nd type
#include <stdio.h>
void s2d(long);//declaration
void main()
{
    long sec;
    printf("Enter seconds: ");
    scanf("%ld", &sec);
    s2d(sec);//calling
    
}
void s2d(long sec)//definition
{
    int day, hr, min;
    day = sec / 86400;     // 1 day = 86400 seconds
    sec = sec % 86400;
    hr = sec / 3600;       // 1 hour = 3600 seconds
    sec = sec % 3600;
    min = sec / 60;        // 1 minute = 60 seconds
    sec = sec % 60;

    printf("%d day(s) %d hour(s) %d minute(s) %ld second(s)\n", day, hr, min, sec);
}
