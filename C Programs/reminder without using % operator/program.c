#include <stdio.h>
int main()
{
    int number,reminder,quotation;

    //Take user from input
    printf("Enter a number: ");
    scanf("%d",&number);

    // calculate quotation
    quotation = number/2;

    //find reminder
    reminder = number - (quotation*2);

    printf("reminder= %d\n",reminder);

    return 0;

}