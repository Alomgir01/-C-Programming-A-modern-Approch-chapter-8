/*C program to count total number of duplicate elements in an array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
int main()
{
    int array[100],size,i,j,count=0;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; i++)
        {
            if(array[i]==array[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate element is: %d",count);
    getch();
}
