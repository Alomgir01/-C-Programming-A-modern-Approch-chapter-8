/*C program to insert an element in array.
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array[S],size,num,i,position;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter array element: ");
    for(i=0; i<size ; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element to insert:");
    scanf("%d",&num);
    printf("Enter element position: ");
    scanf("%d",&position);

    if(position>size+1 || position<=0)
    {
        printf("Invalid");
    }
    else
    {
        for(i=size;i>=position;i--)
        {
            array[i]=array[i-1];
        }
    }

    array[position-1]=num;
    size++;

    printf("Inserted element is: ");
    for(i=0;i<size;i++)
    {
        printf(" %d",array[i]);
    }
    getch();
}
