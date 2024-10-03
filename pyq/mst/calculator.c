#include <stdio.h>

int main() {
    char continueFlag = 'Y';
    
    while (continueFlag == 'Y' || continueFlag == 'y') {
        char operation;
        float num1, num2, result;
        
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operation);
        
        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please try again.\n");
        }
        
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &continueFlag);
    }

    printf("Program exited.\n");
    return 0;
}