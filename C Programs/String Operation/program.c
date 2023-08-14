#include <stdio.h>
#include <string.h>
int main()
{
    /*//String concatenation
    char FirstName[100] = "Ehasanul Haque";
    char LastName[100] = " Milon";
    strcat(FirstName, LastName);
    printf("%s\n", FirstName);*/

    //string input
    char name[1024], place[1024];
    printf("What is your name?\n=>");
    gets(name);
    printf("Hello, %s!\nWellcome to C Programming.\n", name);
    printf("Tell me %s, where do you live?\n=>", name);
    gets(place);
    printf("Oh %s, I'm heard that %s is so lovely place!",name, place);

    /*// Type conversion
    char string[1024];
    printf("Enter a string:\n=> ");
    gets(string);
    
    int length = strlen(string);
    for (int i=0; i<length; i++)
    {
        if (string[i]>='a' && string[i]<='z')
        {
            string[i] = 'A' + (string[i] - 'a');
        }
        else if (string[i]>='A' && string[i]<='Z')
        {
            string[i] = 'a' + (string[i] - 'A');
        }
    }
    printf("Convert to:\n=> %s", string);*/

    return 0;
}