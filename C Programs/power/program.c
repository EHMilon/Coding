#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    for (int i=1; i<=exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    printf("Enter base(a): ");
    scanf("%d", &base);
    printf("Enter exponent(^x): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Error: Negative exponent is not allowed.\n");
        return 1;
    }

    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
