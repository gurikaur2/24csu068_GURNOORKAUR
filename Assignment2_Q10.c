//WAP to count prime numbers in an array.

#include <stdio.h>
int prime(int num) 
{
    if (num <= 1)
    return 0;
    for (int i = 2; i <= num ; i++)
    {
        if (num % i == 0) 
        return 1;
    }
    return 0;
}

int countPrimes(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (prime(arr[i])) 
        {
            count++;
        }
    }
    return count;
}

int main() {
    int i=0,n;
    printf("Enter no of elements:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int primeCount = countPrimes(arr, size);
    
    printf("Number of prime numbers in the array: %d\n", primeCount);
    return 0;
}
