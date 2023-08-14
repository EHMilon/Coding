// #include <stdio.h>

// int main()
// {
//     //input
//     int num = 5;

//     int fact = 1;   // initialize fact=1;
//     for (int i = 1; i <= num; i++) // for loop
//     {
//         fact = fact * i;
//     }
//     printf("Factorial of %d is %d\n", num, fact);
//     return 0;
// }
#include <stdio.h>
int fact(int n)//using recursion function
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    
}
int main()
{
    int num = 3;
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}