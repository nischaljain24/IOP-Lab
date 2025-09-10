// tp is Time period of Earth and it is given in seconds

#include<stdio.h>
int main()
{
    int tp=31558150,days,hours,minutes;
    days=tp/86400;   //Seconds to hours /(24*60*60)
    hours=(tp/3600)-(days*24);
    minutes=(tp/60) - (days*60*24)- (hours*60);
    printf("Time of revolution= %d",days);
    printf(" days %d",hours);
    printf(" hours %d",minutes);
    printf(" minutes");
    
    return 0;
}