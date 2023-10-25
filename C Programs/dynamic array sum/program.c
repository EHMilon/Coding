#include <stdio.h>
int main()
{
    printf("Enter 5 elements of an array:\n");
    int sum[5];
    int total = 0;
    for (int i=0; i<5; i++)
    {
        scanf("%d", &sum[i]);
        total += sum[i];
    }
    printf("Sum of array element is %d",total);
    return 0;
}