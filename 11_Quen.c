#include<stdio.h>
int main()
{
    int sec,min,hour;
    int rem;  //rem is remainder 
    //I am using it to calculate the excess of hours,minutes
    printf("Time in seconds is ");
    scanf("%d", &sec);
    hour=sec/3600;
    rem= sec%3600;

    min=rem/60;
    rem=sec%60;

    sec=rem;
    printf("Time is %d hours %d minutes %d seconds",hour,min,sec);
    return 0;
}