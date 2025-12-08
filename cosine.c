#include <stdio.h>
#include <math.h>

int main() {
    float x, sum, term, fact;
    int i, count, n, sign;
    printf("Enter the angle in degrees: ");
    scanf("%f", &x);
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    x = (x * 3.142) / 180;
    sum = 1.0;
    sign = -1;
    i = 2;
    fact = 1;
    count = 0;
    while (count < n) {
        fact = fact * i * (i - 1);
        term = pow(x, i) / fact;
        sum = sum + (term * sign);
        sign = sign * -1;
        i = i + 2;
        count++;
    }
    printf("Cosine value = %f\n", sum);
    
    return 0;
}