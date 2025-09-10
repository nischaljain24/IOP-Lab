/*
Marks of Subject1 is sub1
Marks of Subject2 is sub2
Marks of Subject3 is sub3
Marks of Subject4 is sub4
Marks of Subject5 is sub5
*/


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
    int percentage=totalmarks/5;

    printf("Total marks is %d", totalmarks);
    printf("\nPercantage is %d",percentage);

    return 0;
}
