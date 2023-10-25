#include <stdio.h>
int main()
{
    int upper_range=90,lower_range=70;
    for (lower_range; lower_range<=upper_range; lower_range++)
    {
        if (lower_range!= 75)
        {
            printf("%d\n",lower_range);
        }
        
    }
    
    return 0;
}