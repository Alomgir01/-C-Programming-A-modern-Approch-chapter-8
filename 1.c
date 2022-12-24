#include<stdbool.h>
#include<stdio.h>
int mian()
{
    long num;
    bool digit_seen[10]={false};
    int digit,to_print[10],i,Empty;


    printf("Enter a number: ");
    scanf("%ld",&num);

    for (digit=num%10 ; num>0; ++to_print[digit])
    {
        if(digit_seen[digit])
        digit_seen[digit]=true;
        num/=10;
    }
    for(i=0;i<10;i++)
    {
        Empty+=to_print[i];
    }
    if(Empty==0)
    {
        printf("No repeated digit\n");
        return 0;
    }
    else
    {
        printf("Repeated digit: ");
        for(i=0;i<10;i++)
            if(to_print[i]>0)
            printf("%d",i);
    }
}


