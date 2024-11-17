
//WAP to read two integers and print their HCF

#include <stdio.h>

int main() {
    int a, b, hcf, var1, var2;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    var1 = a;
    var2 = b;

    
    while (var2 != 0) {
        int var = var2;
        var2 = var1 % var2;
        var1 = var;
    }

    hcf = var1;

    printf("HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
