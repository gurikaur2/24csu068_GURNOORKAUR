//WAP to implement delete-Front, any position in between & end in an array. Print the array before delete & after delete.

#include<stdio.h>
int main()
{
    //deletion at any position
    int i=0,ind,size;
    int marks[50]={12,23,34,45,67};
    /*ind=2;
    size=5;
    for(i=ind;i<size-1;i++)
    {
        marks[i]=marks[i+1];
    }
    
    for(i=0;i<4;i++)
    {
    printf("%d \n",marks[i]);
    }*/
   
   
    //deletion in front
    size=5;
    /*for(i=0;i<size-1;i++)
    {
        marks[i]=marks[i+1];
    }
    
    for(i=0;i<4;i++)
    {
    printf("%d \n",marks[i]);
    }*/
    for(i=size-1;i<size-1;i++)
    {
        marks[i]=marks[i+1];
    }
    
    for(i=0;i<4;i++)
    {
    printf("%d \n",marks[i]);
    }
    return 0;
    
}