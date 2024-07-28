#include <stdio.h>

int main()
{
    /* Question : Given two integers a and b and two inclusive ranges -8...-4 and 10...16,
    write a conditional expression which is true if both a and b are in one of these ranges
    or both integers are not in these ranges. */

    int a , b;
    scanf("%d %d" , &a, &b);
    int aPosition , bPosition;

    if (a >= -8 && a <= -4)
    {
        aPosition = 1;
    }
    else if ( a >= 10 && a <= 16)
    {
        aPosition = 2;
    }
    else
    {
        aPosition = 0;
    }

    if (b >= -8 && b <= -4)
    {
        bPosition = 1;
    }
    else if ( b >= 10 && b <= 16)
    {
        bPosition = 2;
    }
    else
    {
        bPosition = 0;
    }

    if ( aPosition == bPosition )
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}

// Date : 22.7.24
