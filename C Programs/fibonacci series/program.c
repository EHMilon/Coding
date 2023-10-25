#include <stdio.h>
int fib(int num){
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= num; i++) {
        printf("%d\n", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    fib(num);

    return 0;
}
/* #include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;
    while (b <= n) {
        c = a + b;
        if (c > n) {
            break;
        }
        a = b;
        b = c;
    }
    return b; // return the calculated value of b
}

int main() {
    int n = 100;
    int result = fibonacci(n);
    printf("Fibonacci series up to %d: %d\n", n, result);
    return 0;
}
 */
