#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int i, array[]= {12,23,11,33,42},sum=0;
    /*for(i=0; i<=4; i++)
    {
        printf("%5d",array[i]);
    }*/

    {
        printf("ENter any number: ");
        for(i=0; i<5; i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=0; i<5; i++)
        {
            sum=sum+array[i];
        }
        printf("sum is %d",sum);
    }
}
