#include<stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    
    printf("Marks of Subject1 is ");
    scanf("%d", &sub1);
    printf("Marks of Subject2 is ");
    scanf("%d", &sub2);
    printf("Marks of Subject3 is ");
    scanf("%d", &sub3);
    printf("Marks of Subject4 is ");
    scanf("%d", &sub4);
    printf("Marks of Subject5 is ");
    scanf("%d", &sub5);
    
    
    int totalmarks= sub1+sub2+sub3+sub4+sub5;
    float percentage=totalmarks/5.0;
    printf("\nPercantage is %f",percentage);

    if(percentage >= 60)
        printf("Division: First Division");
    else if(percentage >= 50)
        printf("Division: Second Division");
    else if(percentage >= 40)
        printf("Division: Third Division");
    else
        printf("Division: Fail");


    return 0;
}