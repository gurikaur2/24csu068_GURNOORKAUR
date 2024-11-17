#include <stdio.h>

void pyramid(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("%d", j % 2);
        }

        for (int j = 0; j < (n - i - 1) * 2; j++) 
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) 
        {
            printf("%d", j % 2);
        }

        printf("\n");
    }
}

int main() {
    int n = 5;
    pyramid(n);
    return 0;
}
