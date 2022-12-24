/*C program to find maximum and minimum element in array.
Author: Alomgir,
ID-2022-1-60-125*/

#include<std5io.h>
#define S 10
int main(void)
{
    int array[S],num,i,max,min;

    printf("Enter array size: ");
    scanf("%d",&num);

    printf("Enter the element of array: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    max=array[0];
    min=array[0];

    for(i=1; i<num; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("The maximum element is %d \n", max);
    printf("The minimum element is %d",min);
}
