#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z'){ 
        printf("The character is Capital letter");
    }
    else if (c >= 'a' && c <= 'z'){
        printf("The character is Small letter");
    }
    else if (c >= '0' && c <= '9'){
        printf("The character is digit");
    }
    else{
        printf("The character is special symbol");
    }
    
    return 0;
}