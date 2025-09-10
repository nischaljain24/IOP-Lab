#include<stdio.h>
int main()
{
    int bs; //bs is Basic Salary
    int al; //al is Allowances
    int bns; //bns is Statuatory Bonus
    int cg; //cg is Capital Gains
    printf("Basic salary is ");
    scanf("%d", &bs);
    printf("Total Allowances given is ");
    scanf("%d", &al);
    printf("Statuatory bonus is ");
    scanf("%d", &bns);
    printf("Capital Gains is ");
    scanf("%d", &cg);

    int gross_salary= bs+al+bns+cg;
    printf("Gross Salary is %d", gross_salary);

    return 0;
}