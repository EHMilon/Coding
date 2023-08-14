#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    
    for (int num = start ; num <= end; num++)
    {
        for (int i = 0; i <=10; i++)
        {
            printf("%d * %d = %d\n", num,i,num*i);
        }
    }
    
    return 0;
}