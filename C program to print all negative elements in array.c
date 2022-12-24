/* C program to print all negative elements in array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define A 50
int main(void)
{
    int array[A],num,i;

    printf("Enter size of array: ");
    scanf("%d",&num);

    printf("Enter element of array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Element of array are: ");
    for(i=0; i<num; i++)
    {
        printf("%d",array[i]);
    }

    printf("\nAll negative element are: ");
    for(i=0; i<num; i++)
    {
        if(array[i]<0)
        {
            printf("%d",array[i]);
        }
    }
    getch();
}
