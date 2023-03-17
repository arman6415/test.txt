#include <stdio.h>

void add_numbers() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = num1 + num2;
    printf("Result: %d\n", result);
}

void subtract_numbers() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = num1 - num2;
    printf("Result: %d\n", result);
}

void multiply_numbers() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = num1 * num2;
    printf("Result: %d\n", result);
}

void divide_numbers() {
    int num1, num2;
    float result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = (float)num1 / num2;
    printf("Result: %f\n", result);
}

int main() {
    int choice;
    while (1) {
        printf("Menu:\n");
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Multiply two numbers\n");
        printf("4. Divide two numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_numbers();
                break;
            case 2:
                subtract_numbers();
                break;
            case 3:
                multiply_numbers();
                break;
            case 4:
                divide_numbers();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
