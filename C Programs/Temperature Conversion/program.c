#include <stdio.h>
int main()
{
    int select;
    float celsius, fahrenheit;
    printf("Which temperature you want to convert:\n");
    printf("(1) celcius to fahrenheit\n");
    printf("(2) fahrenheit to celsius\n ");
    scanf(" %d", &select);

    if (select==1)
    {
        printf("Enter celcius temperature:\n=>");
        scanf("%f", &celsius);
        fahrenheit = ((celsius*9)/5)+32;
        printf("Convert to fahrenheit %0.2f",fahrenheit);
    }
    else if (select==2)
    {
        printf("Enter fahrenheit temperature:\n=>");
        scanf("%f", &fahrenheit);
        celsius = (5*(fahrenheit-32))/9;
        printf("Convert to celsius %0.2f",celsius);
    }
    else
    {
        printf("Please select option 1 or 2\n");
    }
    return 0;
}