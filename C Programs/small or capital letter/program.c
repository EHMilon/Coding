#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')
    {
        printf("%c is small letter.",ch);
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("%c is Capital letter.",ch);
    }
    else
    {
        printf("%c is not a valid character.",ch);
    }
    
    
    
    return 0;
}