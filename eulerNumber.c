#include <stdio.h>

int main()
{
    /* We will determine the value of Euler number (e) using C.
    we know,
    e = 1  +  1/1!  +  1/2!  +  1/3!  +  1/4!  +  1/5!  + .....
    */

    double sum = 1;
    for ( int i = 1; i <= 15 ; i++ ) // we can using other numbers except 15
    {
        int fact = 1;
        for ( int j = 1 ; j <= i ; j++)
        {
            fact = fact * j;
        }
        sum = sum + 1.0/fact;
    }
    printf("e = %.10lf" ,sum); // e = 2.7182818301
    return 0;
}

// Date : 22.07.24
