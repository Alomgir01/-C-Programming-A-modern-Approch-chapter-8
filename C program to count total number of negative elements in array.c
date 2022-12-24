/*C program to count total number of negative elements in array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array[S],num,i,negative=0;

    printf("Enter the array size: ");
    scanf("%d",&num);

    printf("Enter the element: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The negative element is: ");

    for(i=0;i<num;i++)
    {
        if(array[i]<0)
        {
            negative++;
        }
    }
    printf("%d",negative);
    getch();
}
