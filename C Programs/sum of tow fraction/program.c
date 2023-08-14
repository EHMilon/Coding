#include <stdio.h>
//Using Recursion Function
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        int remainder = a % b;
        return gcd(b, remainder);
    }
}

// int gcd(int a, int b) {
//   int reminder;
//   while (b != 0)
//   {
//     reminder = a % b;
//     a = b;
//     b = reminder;
//   }
//   return a;
// 

int main()
{
  // Take input from user
  int a, b;
  printf("Enter first fraction(a/b): ");
  scanf("%d %d", &a, &b);
  int c, d;
  printf("Enter second fraction(c/d): ");
  scanf("%d %d", &c, &d);

  // Formula
  int lov = a * d + c * b;
  int hor = b * d;

  // Print sum of two fractions
  printf("Sum of two fractions(a/b + c/d) is: %d/%d = %lf\n", lov, hor, (double)lov / hor);

  // Simplify fraction
  int gcdValue = gcd(lov, hor);
  lov /= gcdValue;
  hor /= gcdValue;

  // Print simplified fraction
  printf("Simplified fraction is: %d/%d\n", lov, hor);

  return 0;
}
