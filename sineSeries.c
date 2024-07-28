#include <stdio.h>

int main()
{
    /* We will determine the value of sin(x) using the sine series :
    sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ......
    where x is in radian unit.
    */

    int x;
    //scanf("%d" , &x);
    x = 2; // for example
    double sum = x;
    double term = x;
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        term = (-1*term*x*x)/((2*i)*(2*i+1));
        sum = sum + term;
    }

    printf("sin(%d) = %.10lf" ,x , sum ); // sin(2) = 0.9092974268  , sin(3) = 0.1411200081
    return 0;
}

// Date : 22.07.24
