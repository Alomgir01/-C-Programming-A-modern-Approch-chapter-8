/*C program to merge two sorted array in ascending order
Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
#define S 100
int main(void)
{
    int array1 [S],array2[S],margeArray[S*2],size1,size2,mergeSize,index1,index2,margeIndex,i;

    printf("Enter the size of first array: ");
    scanf("%d",&size1);

    printf("Enter element of first array: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d",&size2);

    printf("Enter element of second array: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d",&array2[i]);
    }

    mergeSize=size1+size2;
    index1=0;
    index2=0;
    for(margeIndex=0; margeIndex<mergeSize; margeIndex++)
    {
        if(index1>=size1 || index2>=size2)
        {
            break;
        }

        if(array1[index1] < array2[index2])
        {
            margeArray[margeIndex]= array1[index1];
            index2++;
        }
    }

    for( margeArray[margeIndex]= array1[index1]; index1< size1; margeIndex++, index1++ )
        for( margeArray[margeIndex]= array2[index2]; index2< size2; margeIndex++, index2++ )
            printf("\n Array merged in ascending order: ");
    {
        printf(" %d",margeArray[i]);
    }
    getch();
}
