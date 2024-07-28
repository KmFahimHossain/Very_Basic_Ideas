#include <stdio.h>

int main()
{
    /* We will determine the value of cos(x) using the cosine series :
    cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ......
    where x is in radian unit.
    */

    int x;
    //scanf("%d" , &x);
    x = 2; // for example
    double sum = 1;
    double term = 1;
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        term = (-1*term*x*x)/((2*i)*(2*i-1));
        sum = sum + term;
    }

    printf("cos(%d) = %.10lf" ,x , sum ); // cos(2) = -0.4161468365 , cos(3) = -0.9899924966
    return 0;
}

// Date : 22.07.24
