#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose operation (+, -, *, /, %%): ");
    scanf(" %c", &op);   // Notice the space before %c (very important)

    switch (op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                printf("Result = %d\n", num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Cannot modulus by zero.\n");
            } else {
                printf("Result = %d\n", num1 % num2);
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
