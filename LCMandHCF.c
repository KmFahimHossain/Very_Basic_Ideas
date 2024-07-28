#include <stdio.h>

int main()
{
    /* The full form of HCF is the Highest Common Factor
    while the full form of LCM is the Least Common Multiple.
    HCF is the largest number that divides two or more numbers
    without leaving a remainder.
    LCM is the smallest multiple that is divisible by two or more integers.
    We will determine the HCF and LCM of 2 numbers. */

    int a,b,x,y;
    printf("Input 2 numbers");
    scanf("%d %d" , &a,&b);
    if ( a < b)
    {
        if ( b%a == 0 )
        {
            printf("LCM is %d\n", a);
            printf("HCF is %d\n", b);
        }
        else
        {
            for ( x = a - 1 ;  ; x = x - 1)
            {
                if ( b%x == 0 && a%x ==0 )
                {
                    printf("LCM is %d\n", x);
                    printf("HCF is %d\n", (a*b)/x) ;
                    break;
                }
            }
        }
    }
    else if ( a > b)
    {
        if ( a%b == 0 )
        {
            printf("LCM is %d\n", b);
            printf("HCF is %d\n", a);
        }
        else
        {
            for ( y = a + 1;  ; y = y + 1)
            {
                if ( a%y == 0 && b%y ==0)
                {
                    printf("HCF is %d\n",y);
                    printf("LCM is  %d\n", (a*b)/y);
                    break;
                }
            }
        }
    }
    else if ( a=b)
    {
        printf("HCF is %d\n", a);
        printf("LCM is %d\n",a);
    }

    return 0;
}

// Date : 2020
