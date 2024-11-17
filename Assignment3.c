//Create a calculator

#include <stdio.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int prod(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
}

double sqroot(int a) {
    if (a >= 0)
        return sqrt(a);
    else {
        printf("Error: Square root of negative numbers is undefined.\n");
        return -1; 
    }
}

double logValue(int a) {
    if (a > 0)
        return log(a);
    else {
        printf("Error: Logarithm of non-positive numbers is undefined.\n");
        return -1; 
    }
}

int main() {
    int choice, x, y;
    
    while (1) {
        printf("\nSimple Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic values\n");
        printf("6. Square roots\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 7) {
            printf("Exiting the calculator.\n");
            break;
        }
        
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
        } else if (choice == 5 || choice == 6) {
            printf("Enter a number: ");
            scanf("%d", &x);
        }

        switch (choice) {
            case 1:
                printf("Result: %d\n", add(x, y));
                break;
            case 2:
                printf("Result: %d\n", sub(x, y));
                break;
            case 3:
                printf("Result: %d\n", prod(x, y));
                break;
            case 4:
                printf("Result: %d\n", divide(x, y));
                break;
            case 5:
                printf("Result: %.2lf\n", logValue(x));
                break;
            case 6:
                printf("Result: %.2lf\n", sqroot(x));
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    
    return 0;
}