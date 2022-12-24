/*Author: Alomgir,
ID-2022-1-60-125*/

#include<stdio.h>
int main()
{
    int num,i,a[5];
    printf("The number of elements to store in the array: ");
    scanf("%d",&num);

    printf("Input 3 number of element: \n");

    i=0;
    while(i<num)
    {
        printf("Element- %d:  ",i);
        scanf("%d",&a[i]);
        i++;
    }

    printf("The values store into the array:");
    do
    {
        i=0;
        printf("%d",a[i]);
        i++;
    }
    while(i<num);

     printf("\nThe value store into the array in reverse are: ");
    for(i=num-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
getch();
}
