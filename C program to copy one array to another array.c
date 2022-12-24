/*C program to copy one array to another array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array[S],num,i,copy[S];

    printf("Enter the array size: ");
    scanf("%d",&num);

    printf("Enter the array element: ");
    for(i=0;i<num; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<num;i++)
    {
        copy[i]=array[i];
    }

    printf("Element of main array: ");
    for(i=0;i<num;i++)
    {
        printf("%d",array[i]);
    }

    printf("\nElement of copy array: ");
    for(i=0;i<num;i++)
    {
        printf("%d",copy[i]);
    }
getch();
}
