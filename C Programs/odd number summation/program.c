#include <stdio.h>
int main()
{
    int n;
    printf("Enter n th number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==1)
        {
            int sum = sum+i;
            if (i==n)
            {
                printf("%d",sum);
            }
            else if (i==(n-1))
            {
                printf("%d",sum);
            }
        }
    }
    return 0;
}