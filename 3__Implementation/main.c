#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#include "conversion.h"
#include<stdlib.h>

int main()
{
    int operations,numbers=1,checking;
    long int b,o,d;
    char h[100];
    int x,y,spacebar;

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while(numbers!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&operations);

        switch(operations)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    checking=checking/10;
                }

                printf("\nEquivalent Decimal Number : %d",Binary_to_Decimal(b)); break;

            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    checking=checking/10;
                }

                printf("\nEquivalent Octal Number : %lld ",Binary_to_Octal(b)); break;

            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    checking=checking/10;
                }

                printf("\nEquivalent Hexadecimal Number is : %s", Binary_to_Hexadecimal(b)); break;

            default:
                printf("\n***INVALID NUMBER***\n");
                break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&numbers);

    }
    spacebar = 3+35;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar--;
            for( y=1;y<=2*x-1;y++)
            {
                printf("*");
            }
            printf("\n");
        }
        spacebar = 37;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar++;
            for( y=1;y<=2*(3-x)-1;y++)
            {
                printf("*");

            }

            printf("\n");

        }

}
