#include <stdio.h>

// Function to calculate factorial recursively
int fact(int n) {
    // START
    // IF n = 0 OR n = 1 THEN RETURN (1)
    if (n == 0 || n == 1) {
        return 1;
    }
    // ELSE RETURN (n * CALL fact(argument: n - 1))
    else {
        return (n * fact(n - 1));
    }
    // STOP
}

int main() {
    // START
    int n, r;
    int npr, ncr;
    
    // INPUT n, r
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    
    // npr = CALL fact(argument: n) / CALL fact(argument: n - r)
    npr = fact(n) / fact(n - r);
    
    // ncr = CALL fact(argument: n) / (CALL fact(argument: r) * CALL fact(argument: n - r))
    ncr = fact(n) / (fact(r) * fact(n - r));
    
    // PRINT npr, ncr
    printf("nPr = %d\n", npr);
    printf("nCr = %d\n", ncr);
    
    // STOP
    return 0;
}