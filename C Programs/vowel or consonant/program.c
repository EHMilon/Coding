#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    /*if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a vowel.",ch);
    }
    else
    {
        printf("%c is a consonant.",ch);
    }*/
    switch(tolower(ch))
    {
        case 'a':
            printf("A is a vowel.");
            break;
        case 'e':
            printf("E is a vowel.");
            break;
        case 'i':
            printf("I is a vowel.");
            break;
        case 'o':
            printf("O is a vowel.");
            break;
        case 'u':
            printf("U is a vowel.");
            break;
        default:
            printf("%c is a constant.",ch);
    }
    
    return 0;
}