/*C program to find second largest number in an array
Author: Alomgir,
ID-2022-1-60-125*/
#include<stdio.h>
#include<limits.h>
#define S 100
int main(void)
{
    int array[S],num,i,max1,max2;

    printf("Enter array size: ");
    scanf("%d",&num);

    printf("Enter the element: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&array[i]);
    }

    max1=max2=INT_MIN;
    for(i=0; i<num; i++)
    {
        if(array[i]>max1)
        {
            max2=max1;
            max1=array[i];
        }
        else if(array[i]>max2 && array[i]<max1)
        {
            max2=array[i];
        }
    }
    printf("First largest value is: %d\n",max1);
    printf("Second largest value is: %d",max2);

    getch();
}
