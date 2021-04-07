#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include "conversion.h"

long int Binary_to_Hexadecimal(long int bin)
{
    int remainder,x=0,summation=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(summation!=0)
    {
        remaining[x]=summation%16;
        summation=summation/16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remaining[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remaining[x]);
        }

    }
}