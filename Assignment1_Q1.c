
//WAP to check whether a given is Armstrong or not.

#include <stdio.h>

int main (){
    int a,n,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    n=a;
    while (a>0)
    {   
        r=a%10;
        r=r*r*r;
        sum=sum+r;
        a=a/10;

    }
    if (sum==n)
    {
        printf("It is an armstrong number.\n");
    }
    else 
    {
        printf("It is NOT an armstrong number.\n");
    }
    
    
    
    return 0;
}