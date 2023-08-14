#include <stdio.h>
int main()
{
    int array[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100, 56};
    int num;
    printf("Which number you want to find:\n=> ");
    scanf("%d", &num);

    int low_index = 0;
    int high_index = 16;
    int mid_index;
    while (low_index<=high_index)
    {
        mid_index = (low_index+high_index)/2;
        if (num == array[mid_index])
        {
            break;
        }
        else if (num < array[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
        
    }
    if (low_index > high_index) 
    { 
        printf("%d is not in the array\n", num);
    } 
    else 
    { 
        printf("%d is found in the array. It is the %d th element of the array.\n", array[mid_index], mid_index); 
    }
    return 0;
}