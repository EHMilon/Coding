#include <stdio.h>
#include <string.h>
int main()
{
    char name[1024];
    printf("What is your name?\n=>");
    gets(name);

    int account_num;
    printf("What is your account number?\n=>");
    scanf("%d", &account_num);

    float average_balance;
    printf("What is your average balance?\n=>");
    scanf("%f", &average_balance);

    int transaction;
    printf("Total transaction?\n=>");
    scanf("%d", &transaction);

    printf("-------Details--------\n");

    printf("Name: %s\n", name);
    printf("Account Number: %d\n", account_num);
    printf("Average Balance: $%0.2f\n", average_balance);
    float interest = (6 * (average_balance) / 100);
    printf("Interest: %0.4f\n", interest);
    float service_charge = 0.50 * transaction;
    printf("Service charge: %0.4f\n", service_charge);
    return 0;
}