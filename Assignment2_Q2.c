//WAP to print grade of students as per their marks given in an array.

#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter no of students");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks of %d",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        switch(marks[i])
        {
            case  75 ... 100:
            printf("\nGrade of %d is A",i);
            break;
            case 60 ... 74:
            printf("\nGrade of %d is B",i);
            break;
            case 40 ... 59:
            printf("\nGrade of %d is C",i);
            break;
            default:
            printf("\nGrade of %d is D",i);
        }
    }
    return 0;
}