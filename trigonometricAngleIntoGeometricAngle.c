#include <stdio.h>

int main()
{
    /* A trigonometric angle can be positive, negative or zero and could be as large or
    as small as possible. But a geometric angle is always between 0 and 360.
    Now we will convert trigonometric angle into geometric angle.
    For example :
    50 > 50
    186 > 186
    370 > 10
    888.67 > 168.67
    -10 > 350
    -730.5 > 349.5  */

    double trigono , geometric , fraction;
    scanf("%lf" , &trigono);

    fraction = trigono - (int)trigono;

    if ( trigono >= 0 )
    {
        geometric = (int)trigono % 360 + fraction ;
        printf("%g" , geometric);
    }

    else
    {
        geometric = (int)trigono % 360 + fraction + 360;
        printf("%g" , geometric);
    }
}

// Date : 22.7.24
