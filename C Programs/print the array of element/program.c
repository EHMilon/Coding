#include <stdio.h>
int main()
{
    int array[10] = {10,15,60,3,90,99};
    for (int i=0; i<10; i++)
    {
        if (array[i] == 0)
        {
            continue;
        }
        printf("%dth element of the array=%d\n",i+1, array[i]);
        
    }
    return 0;
}