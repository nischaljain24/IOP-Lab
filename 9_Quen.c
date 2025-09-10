#include<stdio.h>
int main()
{
    int hours,minutes,seconds,time;
    printf("Hours= ");
    scanf("%d",&hours);
    printf("Minutes= ");
    scanf("%d",&minutes);
    printf("Seconds= ");
    scanf("%d",&seconds);
    time=(hours*3600)+(minutes*60)+(seconds);
    printf("\nTime in seconds is %d\n",time);
    return 0;
}