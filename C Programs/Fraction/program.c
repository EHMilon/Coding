#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    // Take input from user
    int a, b, c, d;
    printf("Enter first fraction(a/b):\n");
    scanf("%d %d", &a, &b);
    printf("Enter second fraction(c/d):\n");
    scanf("%d %d", &c, &d);

    // Formula
    int lov = a * d + c * b;
    int hor = b * d;

    // Print sum of two fractions
    printf("Sum of two fractions(a/b + c/d) is: %d/%d = %lf\n", lov, hor, (double)lov/hor);

    // Simplify fraction
    int gcdVal = gcd(lov, hor);
    lov /= gcdVal;
    hor /= gcdVal;

    // Print simplified fraction
    printf("Simplified fraction is: %d/%d\n", lov, hor);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     //input
//     float num1, den1, num2, den2;
//     printf("Enter first fraction(a/b):\n");
//     scanf("%f %f", &num1, &den1);
//     printf("Enter second fraction(c/d):\n");
//     scanf("%f %f", &num2, &den2);

//     //formula
//     int lov, hor;
//     lov = num1 * den2 + num2 * den1;
//     hor = den1 * den2;
    
//     //loop
//     if (lov>hor)
//     {
//         for (int i=1; i<=lov; i++)
//         {
//             if (lov%i==0 && hor%i==0)
//             {
//                 lov = lov / i;
//                 hor = hor / i;
//                 //printf("/*sum of tow fraction is\n(%d/%d)+(%d/%d) = %d/%d\n",num1,den1,num2,den2,lov,hor);
//                 printf("%d/%d\n",lov,hor);
//             }
//         }
//     }
//     else if (lov==hor)
//     {
//         printf("0");
//     }
//     else if (hor>lov)
//     {
//         for (int i=1; i<=hor; i++)
//         {
//             if (lov%i==0 && hor%i==0)
//             {
//                 lov = lov / i;
//                 hor = hor / i;
//                 printf("%d/%d\n",lov,hor);
//             }
//         }
//     }

//     return 0;
// }
