/*C program to delete an element from array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array [S],size,i,position;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d",&position);

    if(position<0 || position>size)
    {
        printf("Invalid");
    }
    else
    {
        for(i=position-1; i<size-1; i++)
        {
            array[i]=array[i+1];
        }
        size--;
    }
    printf("Element after delete the position %d: ",position);
    for(i=0; i<size; i++)
    {
        printf(" %d",array[i]);
    }
    getch();
}
