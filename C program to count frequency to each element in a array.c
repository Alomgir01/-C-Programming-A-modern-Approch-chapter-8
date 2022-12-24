/* C program to count frequency to each element in a array
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
int main()
{
    int array[100],frequency[100],size,i,j,count;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
        frequency[i]=-1;
    }
    for(i=0; i<size; i++)
    {
        count=1;
        for(j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if(frequency[i]!=0)
        {
            frequency[i]=count;
        }
    }

    printf("frequency of all element: \n");
    for(i=0; i<size; i++)
    {
        if(frequency[i]!=0)
        {
            printf("%d occurs %d times\n",array[i],frequency[i]);
        }
    }
    getch();
}
