/*C program to read and print elements in an array

Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define N 10
int main(void)
{
    int array[N],i,num;

    printf("Enter size of array: ");
    scanf("%d",&num);

    printf("Enter element in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nElement in array: ");
    for(i=0; i<num; i++)
    {
        printf("%d",array[i]);
    }

    getch();
}
