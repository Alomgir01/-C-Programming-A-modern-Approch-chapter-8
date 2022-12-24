/*C program to count total number of even and odd elements in an array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array[S],num,i,even,odd;

    printf("Enter the size of array:");
    scanf("%d",&num);

    printf("Enter element: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&array[i]);
    }

    even=0;
    odd=0;
    for(i=0; i<num; i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even number is: %d\n",even);
    printf("Odd number is: %d",odd);

    getch();
}
