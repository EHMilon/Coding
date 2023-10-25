/* Example */
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  char name[20];
  printf("Your name? ");
  gets(name);

  char account_num;
  printf("Your account number? ");
  scanf("%s", &account_num);

  double average_balance;
  printf("Your average balance? ");
  scanf("%lf", &average_balance);

