#include <stdio.h>

int main()
{
    int year;
    printf("Enter year(0 to exit): ");
    scanf("%d", &year);

    while (1)
    {
        if (year==0)
        {
            break;
        }
        
        if ((year%4==0 && year%100!=0)||year%400==0)
        {
            printf("%d is a leap year.\n",year);
        }
        else
        {
            printf("%d is not a leap year.\n",year);
        }
    }
    
    return 0;
}