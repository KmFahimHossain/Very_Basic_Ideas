#include <stdio.h>
#include <math.h>

int main()
{

    /* For a quadratic equation ax^2 + bx + c = 0 ,
    we will find the solutions x1 and x2 , including imaginary answers */

    double a , b , c;
    double x1, x2, d;
    scanf ("%lf %lf %lf" , &a , &b, &c);
    d = b*b - 4*a*c;
    if ( a == 0 )
    {
        if ( b != 0 )
        {
            x1 = -c*1.0/b;
            printf("%g" , x1);
            return 0;
        }
        else
        {
            printf("Error");
            return 1;
        }
    }
    else if ( d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
    }
    else if ( d == 0)
    {
        x1 = -b / (2*a);
        x2 = x1;
    }
    else if ( d < 0 )
    {
        printf("%lf + %lfi\n" , -b*1.0/(2*a) , sqrt(4*a*c - b*b) / (2*a));
        printf("%lf - %lfi\n" , -b*1.0/(2*a) , sqrt(4*a*c - b*b) / (2*a));
        return 0;
    }
    printf("%g %g" , x1 , x2);
    return 0;
}

// Date : 22.7.24
