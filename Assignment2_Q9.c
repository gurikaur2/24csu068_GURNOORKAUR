//WAP to find a peak element which is not smaller than its neighbors.

#include<stdio.h>
int main()
{
    int i=0,peak,stu;
    printf("No of students:");
    scanf("%d",&stu);
    int marks[stu];
    for(i=0;i<stu;i++)
    {
        printf("Enter marks of %d:",i);
        scanf("%d",&marks[i]);
    }

    for(i=0;i<stu;i++)
    {
        if(marks[i]>marks[i+1] && marks[i]>marks[i-1])
        {
            peak=marks[i];
            printf("Peak elements is of %d,i.e %d\n",i,peak);
        }  
        

    }

    return 0;
}