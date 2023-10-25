// #include <stdio.h>

// int main()
// {
//     //prime number between 1 to 100
//     int low_num=1, upper_num=100;

//     for (low_num=2; low_num<=upper_num; low_num++)
//     {
//         for (int i=2; i<=upper_num; i++)
//         {
//             if (low_num%i==0)
//             {
//                 printf("%d ", low_num);
//             }
            
//         }
        
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    //prime number between 1 to 100
    int low_num=1, upper_num=100;

    for (low_num; low_num<=upper_num; low_num++)
    {
        int is_prime = 1;
        for (int i=2; i<low_num; i++)
        {
            if (low_num%i==0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\n", low_num);
        }
    }
    return 0;
}
