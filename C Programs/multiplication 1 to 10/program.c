#include <stdio.h>
int main()
{
    /*int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //using for loop
    int i = 1;      //initialization
    for (; ;)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        if (i>=10)  //condition
        {
            break;
        }
        i++;        //increment,decrement
    }*/

    //using while loop
    /*int i = 1;
    
    while (i<=10)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }*/
    
    //i don't know how does it work
    int m=0,num;
    printf("Enter a number: ");
    scanf("%d", & num);
    
    for(int i=1; i<=10; i++)
    {
        m = m + num;
        printf("%d * %d = %d\n",num,i,m);
    }
    return 0;
}