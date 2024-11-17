//WAP to find average score of the Marks array.

#include<stdio.h>
int main()
{
    int i=0,sum=0,stu,avg;
    printf("No of students:");
    scanf("%d",&stu);
    int marks[stu];
    for(i=0;i<stu;i++)
    {
        printf("Enter marks of %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<stu;i++)
    {
        sum=sum+marks[i];    
    }
    printf("Marks of all students=%d\n",sum);
    avg=sum/stu;
    printf("Average marks of all students=%d\n",avg);
    return 0;
}