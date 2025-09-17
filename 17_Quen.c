//Print greater of three numbbers a,b,c using && operator;

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("A is ");
    scanf("%d",&a);
    printf("B is ");
    scanf("%d",&b);
    printf("C is ");
    scanf("%d",&c);
    
    if(a==b && b==c)
    {
        printf("All are equal");
    }

    else if (a==b && b!=c)
    {
        if (a>c)
        {
            printf("A=B are greater than C");
        }
        else
        {
            printf("C is greatest");
        }
        
    }
    
    else if (a==c && b!=c)
    {
        if (a>b)
        {
            printf("A=C are greater than B");
        }
        else
        {
            printf("B is greatest");
        }
        
    }

    else if (c==b && b!=a)
    {
        if (c>a)
        {
            printf("B=C are greater than A");
        }
        else
        {
            printf("A is greatest");
        }
        
    }

    else if (a>b)
    {
        if(a>c)
        {
            printf("A is biggest");
        }
        else
        {
            printf("C is biggest");
        }
    }
    else
    {
        if (b>c)
        {
            printf("B is biggest");
        }
        else
        {
            printf("C is biggest");
        }
        
    }
    
    return 0;
}