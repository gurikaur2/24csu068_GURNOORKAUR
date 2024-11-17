//WAP to accept two integer numbers and swap them using 4 different methods in C language.

#include <stdio.h>

/* // METHOD 1
void swapUsingTempvar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// METHOD 2
void swapUsingAddSub(int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
} */

// METHOD 3
void swapUsingXOR(int *a, int *b) 
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// METHOD 4
/* void swapUsingMulDiv(int *a, int *b) 
{
    if (*b != 0) 
    { 
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    } else {
        printf("Cannot swap using multiplication and division as one value is zero.\n");
    }
}
 */
int main() 
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Original values: n1 = %d, n2 = %d\n", n1, n2);

    //Calling function of METHOD 1
   /*  swapUsingTempvar(&num1, &num2);
    printf("After swapUsingTempvar: n1 = %d, n2 = %d\n", n1, n2);


    // Calling function of METHOD 2
    swapUsingAddSub(&n1, &n2);
    printf("After swapUsingAddSub: n1 = %d, n2 = %d\n", n1, n2);
 */
  

    // Calling function of METHOD 3
    swapUsingXOR(&n1, &n2);
    printf("After swapUsingXOR: n1 = %d, n2 = %d\n", n1, n2);


   /*  // Calling function of METHOD 4
    swapUsingMulDiv(&n1, &n2);
    printf("After swapUsingMulDiv: n1 = %d, n2 = %d\n", n1, n2);
 */
    return 0;
}
