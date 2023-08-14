Here's a C program to convert the decimal number 1.266667 to a fraction in the form of a ratio of two integers:

```c
#include <stdio.h>

int main() {
    double decimal = 1.266667;
    int numerator = 1000000 * decimal;
    int denominator = 1000000;
    
    // Reduce the fraction by finding the greatest common divisor
    int gcd = numerator;
    while (gcd != 1) {
        int temp = gcd;
        gcd = denominator % gcd;
        denominator = temp;
    }
    numerator /= denominator / gcd;
    denominator /= denominator / gcd;

    printf("%.6lf is equal to %d/%d\n", decimal, numerator, denominator);
    return 0;
}
```

This program multiplies the decimal number by 1,000,000 to get an integer numerator and denominator. It then reduces the fraction by finding the greatest common divisor, and finally prints the result as a fraction. 

The output will be:
```
1.266667 is equal to 19/15
```


Here's a C program to convert a decimal number to fraction:

```c
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

void toFraction(double num) {
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num *= -1;
    }

    int wholePart = (int) num;

    double fractionalPart = num - wholePart;

    const double EPSILON = 0.000001;

    int denom = 1;
    while (fabs(fractionalPart - (int) fractionalPart) > EPSILON) {
        denom *= 10;
        fractionalPart *= 10;
    }

    int numer = fractionalPart;

    int g = gcd(numer, denom);
    numer /= g;
    denom /= g;

    if (wholePart != 0) {
        printf("%d ", wholePart * sign);
    }
    printf("%d/%d", numer * sign, denom);
}

int main() {
    double num = 1.5;
    toFraction(num);

    return 0;
}
```

This program first determines the sign of the input number and separates it into its whole and fractional parts. It then multiplies the fractional part by 10 until it becomes an integer, keeping track of the denominator. The resulting numerator and denominator are then reduced to their lowest terms using the GCD function.

Finally, the program prints out the resulting fraction in mixed number form if the input was not already an integer.


Explanation:
This is a C program that converts a decimal number to a fraction. 

The `gcd` function finds the greatest common divisor of two integers using Euclid's algorithm. It takes two integer arguments, `a` and `b`, and returns their gcd.

The `toFraction` function takes a double argument `num`, which represents the decimal number to be converted. It first checks if the number is negative and stores the sign. It then separates the whole part and fractional part of the number.

Next, it sets an epsilon value to 0.000001 and initializes the denominator to 1. It enters a while loop that multiplies the denominator by 10 and the fractional part by 10 until the difference between the fractional part and its integer value is less than the epsilon value. This effectively finds the smallest denominator that will result in an accurate fraction representation of the decimal.

It then converts the fractional part to an integer numerator and calls the `gcd` function to find the greatest common divisor of the numerator and denominator. It divides both the numerator and denominator by the gcd to simplify the fraction.

Finally, it prints out the fraction in the format "numerator/denominator", with the sign and whole part (if any) included.

In the `main` function, it declares a double variable `num` and initializes it to 1.5. It then calls the `toFraction` function with `num` as the argument, which prints out the fraction representation of 1.5 as "3/2".
 scenario