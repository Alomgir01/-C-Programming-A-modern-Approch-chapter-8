/*Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
int main(void)
{
    int num,i,a[5],sum=0;

    printf("Enter array element: ");
    scanf("%d",&num);


    printf("Enter 3 elements: \n");
    for(i=0; i<num; i++)
    {
        printf("elements %d.  ",i);
        scanf("%d",&a[i]);
    }

    printf("Value store in the array: ");
    for(i=0; i<num; i++)
    {
        printf("%d",a[i]);
    }

    printf("\nSum the element: ");
    for(i=0; i<num; i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);

    getch();
}
