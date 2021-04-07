#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include "conversion.h"

long int Binary_to_Octal(long int bin)
{
    int x=0,remainder,sum=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        sum=sum+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(sum!=0)
    {
        remaining[x]=sum%8;
        sum=sum/8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remaining[x]);
    }
}