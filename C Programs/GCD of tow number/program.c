//program name
#include <stdio.h>

int main()
{
    // program name
    int a, b, rem;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    printf("GCD of tow number is: %d", a);
    return 0;
}
