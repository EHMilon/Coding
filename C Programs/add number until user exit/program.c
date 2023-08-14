/* Find the largest number from entered number. */
#include <stdio.h>
int main()
{
    int num, sum = 0, large = 0, count = 0, small;
    if (num == 0)
    {
        return 0;
    }
    num = small;
    float avg;
    do
    {
        printf("Enter a number(0 for exit): ");
        scanf("%d", &num);
        sum += num;
        if (num > large)
        {
            large = num;
        }
        count++;
        if (small > num)
        {
            small = num;
        }

    } while (num != 0);
    printf("You entered %d numbers.\n", count - 1);
    printf("The sum is %d\n", sum);
    printf("The largest number is %d\n", large);
    printf("The smallest number is %d\n",small);
    avg = (float)sum / count;
    printf("The average is %f", avg);
    return 0;
}
