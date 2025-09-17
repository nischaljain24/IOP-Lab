//PROGRAM TO CALCULATE FACTORIAL OF A NO
#include<stdio.h>

int main()
{
    int number,num,result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    //We will print output in RESULT
    for(number=1;number<=num;number++)
    {
        result=result*number;
    }
    printf("The factorial is %d\n",result);

    return 0;
}