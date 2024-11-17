//WAP to check whether number is Perfect Number or not.

#include <stdio.h>

int perfectnumber(int num) 
{
    int sum = 0;
    // Find all divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }

    return sum == num;
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (perfectnumber(number)) 
    {
        printf("%d is a perfect number.\n", number);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
