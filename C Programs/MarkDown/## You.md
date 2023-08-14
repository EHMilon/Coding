## You

Write a C program to read two pairs of integers. Each pair represents a fraction. For example, the pair 3 5 represents the fraction 3/5. Your program should print the sum of the given fractions. For example, give the pairs 3 5 and 2 3, your program should print 19/15, since 3/5 + 2/3 = 19/15. Modify the program so that it prints the sum with the fraction reduced to a proper
fraction; for this example, your program should print 1 4/15.

## Maya

Sure, here's the C program to read two pairs of integers representing fractions and print their sum:

```c
#include <stdio.h>

int main() {
    int num1, den1, num2, den2, num_sum, den_sum;
    printf("Enter the first fraction: ");
    scanf("%d %d", &num1, &den1);
    printf("Enter the second fraction: ");
    scanf("%d %d", &num2, &den2);
    num_sum = num1 * den2 + num2 * den1;
    den_sum = den1 * den2;
    printf("The sum is %d/%d\n", num_sum, den_sum);
    int whole = num_sum / den_sum;
    int rem = num_sum % den_sum;
    if (whole > 0) {
        printf("The sum in proper fraction is: %d %d/%d", whole, rem, den_sum);
    } else {
        printf("The sum in proper fraction is: %d/%d", num_sum, den_sum);
    }
    return 0;
}
```

In this program, we first declare the variables `num1`, `den1`, `num2`, `den2`, `num_sum`, and `den_sum` to store the input fractions and their sum. We then use `printf` and `scanf` functions to read two pairs of integers from the user.

Next, we calculate the sum of the given fractions by multiplying the numerators and denominators of each fraction and adding them together. We store the result in `num_sum` and `den_sum`.

Finally, we check if the sum is a proper fraction or not. If it is, we convert it to a mixed number (a whole number plus a proper fraction). We then print the sum in both improper and proper fraction forms using `printf`.

I hope this helps! Let me know if you have any questions.

## You

Write a C program to read a person’s name, hours worked, hourly rate of pay, and tax rate (a number representing a percentage, e.g., 25 meaning 25%). The program must print the name, gross pay, tax deducted, and gross pay.
Gross pay is calculated as described in Section 4.4.1. The tax deducted is calculated by applying the tax rate to 80% of gross pay. And the net pay is calculated by subtracting the tax deducted from the gross pay.
For example, if the person works 50 hours at $20/hour and the tax rate is 25%, his gross pay would be (40 x 20) + (10 20 1.5) = $1100. He pays 25% tax on 80% of
$1100, that is, 25% of $880 = $220. His net pay is 1100 - 220 = $880.

## Maya

```c
#include <stdio.h>

int main() {
    char name[50];
    float hours, rate, tax_rate;
    float gross_pay, tax_deducted, net_pay;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly rate of pay: ");
    scanf("%f", &rate);

    printf("Enter tax rate (percentage): ");
    scanf("%f", &tax_rate);

    // calculate gross pay
    if (hours <= 40) {
        gross_pay = hours * rate;
    } else {
        gross_pay = 40 * rate + (hours - 40) * 1.5 * rate;
    }

    // calculate tax deducted
    tax_deducted = tax_rate / 100 * 0.8 * gross_pay;

    // calculate net pay
    net_pay = gross_pay - tax_deducted;

    // print results
    printf("\nName: %s\n", name);
    printf("Gross Pay: %.2f\n", gross_pay);
    printf("Tax Deducted: %.2f\n", tax_deducted);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
}
```
In this program, we first declare the necessary variables to store the input values and the calculated results. We then prompt the user to enter their name, hours worked, hourly rate of pay, and tax rate (as a percentage). 

We then calculate the gross pay using an if-else statement to handle overtime pay if the number of hours worked is greater than 40. We then calculate the tax deducted by applying the tax rate to 80% of the gross pay. Finally, we calculate the net pay by subtracting the tax deducted from the gross pay.

We then print out the results using printf statements with appropriate formatting. The output will include the person's name, gross pay, tax deducted, and net pay.

## You

Write a program to read integer values for month and year and print the number of days in the month. For example, 4 2005 (April 2005) should print 30, 2 2004 (February 2004) should print 29 and 2 1900 (February 1900) should print 28. A leap year, n, is divisible by 4; however, if n is divisible by 100 then it is a leap year
only if it is also divisible by 400. So 1900 is not a leap year but 2000 is.

## Maya

```c
#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter the month and year: ");
    scanf("%d %d", &month, &year);

    switch(month) {
        case 1:
            days = 31;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                days = 29;
            else
                days = 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            printf("Invalid input!");
            return 0;
    }

    printf("Number of days in the month: %d", days);
    return 0;
}
```

## You

In an English class, a student is given three term tests (marked out of 25) and an end-of-term test (marked out of 100). The end-of-term test counts the same as the three term tests in determining the final mark (out of 100). Write a program to read marks for the three term tests followed by the mark for the end-of-term test. The program then prints the final mark and an indication of whether the student passes or fails. To pass, the final mark must be 50 or more. For example, given the data 20 10 15 56, the final mark is calculated by
(20+10+15)/75*50 + 56/100*50 = 58

## Maya

```c
#include <stdio.h>

int main() {
    int t1, t2, t3, end_term, final_mark;
    float weighted_avg;

    printf("Enter marks for three term tests: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    printf("Enter mark for end-of-term test: ");
    scanf("%d", &end_term);

    // calculate the final mark
    weighted_avg = (float)(t1 + t2 + t3) / 75 * 50 + (float)end_term / 100 * 50;
    final_mark = (int)weighted_avg;

    printf("Final mark: %d\n", final_mark);

    if(final_mark >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
```

In this program, we first declare variables to store the marks for the three term tests (`t1`, `t2`, `t3`) and the end-of-term test (`end_term`). We also declare a variable to store the final mark (`final_mark`) and a variable to store the weighted average of the four tests (`weighted_avg`).

We then prompt the user to enter the marks for the three term tests and the end-of-term test using `printf()` and `scanf()` functions.

Next, we calculate the final mark by applying the given formula. We use type casting to ensure that the division is done as floating-point arithmetic.

Finally, we print the final mark and an indication of whether the student passes or fails. If the final mark is greater than or equal to 50, we print "Pass". Otherwise, we print "Fail".

## You

Write a C program to request two times given in 24-hour clock format and find the time (in hours and minutes) that has elapsed between the first time and the second time. You may assume that the second time is later than the first time. Each time is represented by two numbers: e.g., 16 45 means the time 16:45, that is, 4:45 p.m. For example, if the two given times are 16 45 and 23 25 your answer should be 6 hours 40 minutes. Modify the program so that it works as follows: if the second time is sooner than the first time, take it to mean a time for the next day. For example, given the times 20:30 and 6:15, take this to mean 8.30 p.m. to 6.15 a.m. of the next day. Your answer should
be 9 hours 45 minutes.

## Maya

Here's the solution to your problem:

```c
#include <stdio.h>

int main() {
    int hour1, minute1, hour2, minute2;
    int elapsed_hours, elapsed_minutes;

    printf("Enter the first time (in 24-hour clock format): ");
    scanf("%d %d", &hour1, &minute1);

    printf("Enter the second time (in 24-hour clock format): ");
    scanf("%d %d", &hour2, &minute2);

    if (hour2 < hour1) {
        hour2 += 24;
    }

    elapsed_hours = hour2 - hour1;
    elapsed_minutes = minute2 - minute1;

    if (elapsed_minutes < 0) {
        elapsed_hours--;
        elapsed_minutes += 60;
    }

    printf("Time elapsed: %d hours %d minutes\n", elapsed_hours, elapsed_minutes);

    return 0;
}
```

In this program, we first read in the two times given in 24-hour clock format as four integers: `hour1`, `minute1`, `hour2`, and `minute2`. We then check if `hour2` is less than `hour1`, which indicates that the second time is on the next day. In this case, we add 24 to `hour2` to get the correct elapsed time.

We then calculate the number of elapsed hours and minutes by subtracting `hour1` from `hour2` and `minute1` from `minute2`, respectively. If `minute2` is less than `minute1`, we subtract an hour from the elapsed hours and add 60 minutes to the elapsed minutes.

Finally, we print out the elapsed time in hours and minutes using the `printf` function.

## You

A bank pays interest based on the amount of money deposited. If the amount is less than $5,000, the interest is 4% per annum. If the amount is $5,000 or more but less than $10,000, the interest is 5% per annum. If the amount is $10,000 or more but less than $20,000, the interest is 6% per annum. If the amount is $20,000 or more, the interest is 7% per annum. Write a program to request the amount deposited and print the interest earned for
one year.

## Maya

```c
#include <stdio.h>

int main() {
    double amount, interest;
    printf("Enter the amount deposited: ");
    scanf("%lf", &amount);
    
    if (amount < 5000) {
        interest = amount * 0.04;
    } else if (amount >= 5000 && amount < 10000) {
        interest = amount * 0.05;
    } else if (amount >= 10000 && amount < 20000) {
        interest = amount * 0.06;
    } else {
        interest = amount * 0.07;
    }
    
    printf("Interest earned for one year is $%.2lf\n", interest);
    return 0;
}
```

In this program, we first prompt the user to enter the amount deposited and read it using `scanf`. Then, we use a series of `if` statements to check the amount deposited and calculate the interest earned based on the given criteria. Finally, we print the interest earned for one year using `printf`.

## You

For any year between 1900 and 2099, inclusive, the month and day on which Easter Sunday falls can be determined by the following algorithm:
set a to year minus 1900
set b to the remainder when a is divided by 19 set c to the integer quotient when 7b + 1 is divided by 19 set d to the remainder when 11b + 4 - c is divided by 29 set e to the integer quotient when a is divided by 4 set f to the remainder when a + e + 31 - d is divided by 7 set g to 25 minus the sum of d and f if g is less than or equal to 0 then set month to 'March' set day to 31 + g
else
set month to 'April' set day to g
endif Write a program that requests a year between 1900 and 2099, inclusive, and checks if the year is valid. If it is, print the day on which Easter Sunday falls in that year. For
example, if the year is 1999, your program should print April 4.

## Maya

```c
#include <stdio.h>

int main() {
    int year, a, b, c, d, e, f, g;
    printf("Enter a year between 1900 and 2099: ");
    scanf("%d", &year);

    if (year >= 1900 && year <= 2099) {
        a = year - 1900;
        b = a % 19;
        c = (7 * b + 1) / 19;
        d = (11 * b + 4 - c) % 29;
        e = a / 4;
        f = (a + e + 31 - d) % 7;
        g = 25 - d - f;

        if (g > 0) {
            printf("Easter Sunday is on April %d in %d.\n", g, year);
        } else {
            printf("Easter Sunday is on March %d in %d.\n", 31 + g, year);
        }
    } else {
        printf("Invalid year entered.\n");
    }

    return 0;
}
```

## You

Write a program to prompt for the name of an item, its previous price, and its current price. Print the percentage increase or decrease in the price. For example, if the previous price is $80 and the current price is $100, you should print increase of 25%; if the previous price is $100 and the current price is $80, you should print
decrease of 20%.

## Maya

```C
#include <stdio.h>

int main() {
    char item[20];
    float previousPrice, currentPrice, percentageChange;

    printf("Enter the name of the item: ");
    scanf("%s", item);

    printf("Enter the previous price: $");
    scanf("%f", &previousPrice);

    printf("Enter the current price: $");
    scanf("%f", ¤tPrice);

    percentageChange = ((currentPrice - previousPrice) / previousPrice) * 100;

    if (percentageChange > 0) {
        printf("The price of %s has increased by %.2f%%.\n", item, percentageChange);
    } else if (percentageChange < 0) {
        printf("The price of %s has decreased by %.2f%%.\n", item, -percentageChange);
    } else {
        printf("The price of %s has not changed.\n", item);
    }

    return 0;
}
```

This program prompts the user for the name of an item, its previous price, and its current price. It then calculates the percentage increase or decrease in the price and prints a message indicating the change. If the percentage change is positive, it indicates an increase in price; if negative, it indicates a decrease in price; and if zero, it indicates no change in price.

## You

A country charges income tax as follows based on one’s gross salary. No tax is charged on the first 20% of salary. The remaining 80% is called taxable income. Tax is paid as follows: •• 10% on the first $15,000 of taxable income; •• 20% on the next $20,000 of taxable income; •• 25% on all taxable income in excess of $35,000. Write a program to read a value for a person’s salary and print the amount of tax to be paid. Also print the average tax rate, that is, the percentage of salary that is paid in tax. For example, on a salary of $20,000, a person pays $1700 in tax.
The average tax rate is 1700/20000*100 = 8.5%.

## Maya

```C
#include <stdio.h>

int main() {
    float salary, taxable_income, tax;
    float average_tax_rate;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary <= 0) {
        printf("Invalid salary amount!");
        return 0;
    }

    if (salary <= 20000) {
        taxable_income = 0.8 * salary;
        tax = 0.1 * taxable_income;
    } else if (salary <= 35000) {
        taxable_income = 0.8 * salary;
        tax = 0.1 * 15000 + 0.2 * (taxable_income - 15000);
    } else {
        taxable_income = 0.8 * salary;
        tax = 0.1 * 15000 + 0.2 * 20000 + 0.25 * (taxable_income - 35000);
    }

    average_tax_rate = (tax / salary) * 100;

    printf("Tax to be paid: $%.2f\n", tax);
    printf("Average tax rate: %.1f%%\n", average_tax_rate);

    return 0;
}
```

In the above program, we first prompt the user to enter their salary. We then check if the salary is a valid positive number. If the salary is less than or equal to 20000, we calculate the taxable income as 80% of the salary and apply a tax rate of 10%. If the salary is between 20000 and 35000, we apply a tax rate of 10% on the first 15000 of taxable income and a tax rate of 20% on the remaining taxable income. If the salary is greater than 35000, we apply a tax rate of 10% on the first 15000 of taxable income, a tax rate of 20% on the next 20000 of taxable income, and a tax rate of 25% on the remaining taxable income. 

We then calculate the average tax rate by dividing the tax amount by the salary and multiplying by 100. Finally, we print the tax to be paid and the average tax rate.