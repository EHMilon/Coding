/* Example */
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  int a, b, c, d, e;
  printf("Enter a and b: \n");
  scanf("%d %d", &a, &b);
  c = (a - b) * 2;
  e = a / (b + 1);
  d = e + a;
  printf("%d %d %d\n", c, d, e);

  return 0;
}