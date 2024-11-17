//WAP to subtract two integers without using Minus (-) operator.

#include <stdio.h>

int subtract(int a, int b) {
    
    while (b != 0) {
        unsigned borrow = (~a) & b; //unsigned is being used so as to avoid any negative value
        a = a ^ b;// Subtraction using XOR
        b = borrow << 1;// Borrow shifts left by 1
    }
    return a;
}

int main() {
    int n1, n2, result;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    result = subtract(n1, n2);
    printf("Result of %d - %d is: %d\n", n1, n2, result);

    return 0;
}
