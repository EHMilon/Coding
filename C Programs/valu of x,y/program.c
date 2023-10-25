#include <stdio.h>

int main() {
    float x, y;
    
    // Solve system of equations
    x = ((float) (6 * 14 - 5 * 17)) / (24 - 25);
    y = ((float) (17 - 5 * x)) / 6;
    
    // Print results
    printf("The values of x and y are: %.2f, %.2f\n", x, y);
    
    return 0;
}
