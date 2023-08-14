#include <stdio.h>

int fib(int num) {
    if (num == 0 || num == 1) { // base case
        return num;
    } else {
        return fib(num - 1) + fib(num - 2); // recursive call
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d\n" fib(i));
    }

    return 0;
}
