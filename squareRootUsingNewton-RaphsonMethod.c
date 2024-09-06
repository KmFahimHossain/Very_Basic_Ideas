#include <stdio.h>
#include <math.h>

int main()
{
    /*In this code we will try to calculate the square root of
    any given positive number using the Newton-Raphson method.
    The Newton-Raphson method is an iterative numerical technique to
    find the square root of a number s.
    The formula is:
    x_(n+1) = (1/2) * (x_n + S / x_n)
    where x_n  is the current approximation and x_(n+1) is the refined approximation.*/

    double s;
    s = 16.22;
    //scanf("%lf" , &s);

    // At first we need to take an approximate root , let it be 1
    double x = 1;
    double nextX;

    while(1)
    {
        nextX = 0.5*( x + s/x);
        if ( fabs(nextX - x) < 0.0000005)
        {
            break;
        }
        x = nextX;
        printf("%lf\n", x);
    }

    printf("\nSquare root of %g is %lf\n" , s , x);

    return 0;
}

// Date : 04.09.24
