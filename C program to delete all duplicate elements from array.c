/*C program to count total number of duplicate elements in an array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
int main()
{
    int array[100],size,i,j,k;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                for(k=j; k<size-1; k++)
                {
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf(" duplicate element after deleting: ");
    for(i=0; i<size; i++)
    {
        printf(" %d",array[i]);
    }
    getch();
}
