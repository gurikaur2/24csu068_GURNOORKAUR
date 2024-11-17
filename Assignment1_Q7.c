//WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, remainder, place = 1;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * place;
        decimal = decimal / 2;
        place = place * 10;
    }
    return binary;
}

int main() {
    int choice, number, result;
    printf("Choose the conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) 
    { 
        printf("Enter a binary number: ");
        scanf("%d", &number);
        result = binaryToDecimal(number);
        printf("Binary %d in Decimal is %d\n", number, result);
    } 
    else if (choice == 2) 
    {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        result = decimalToBinary(number);
        printf("Decimal %d in Binary is %d\n", number, result);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
