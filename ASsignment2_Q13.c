// Given an array, the task is to cyclically rotate the array clockwise by one time

#include <stdio.h>

void rotateByOne(int arr[], int size) {
    int last = arr[size - 1];
    
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int i=0,n;
    printf("Enter no of elements");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element  %d\n",i);
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateByOne(arr, size);
    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}