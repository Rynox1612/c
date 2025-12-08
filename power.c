#include <stdio.h>
int expon(int base, int power) {
    if (power != 1) {
        return base * expon(base, power - 1);
    }
    else {
        return 1;
    }
}

int main() {
    int base, power, result;
    printf("Enter base value: ");
    scanf("%d", &base);
    printf("Enter power value: ");
    scanf("%d", &power);

    result = expon(base, power);
    

    printf("%d^%d = %d\n", base, power, result);

    return 0;
}