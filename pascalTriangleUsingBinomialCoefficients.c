#include <stdio.h>

/*
    We will print the Pascal Triangle (of n) using the binomial coefficients.
    For n = 6 , Pascal triangle is shown below.

    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    1 6 15 20 15 6 1

    A binomial coefficient nCr = n! / (r!*(n-r)!)
    Using the binomial coefficients, we can get a triangle called Pascal triangle.
    Here the first line has 0C0 , the second line has 1C0 and 1C1,
    and the third line has 2C0, 2C1 and 2C2.
*/

int fact( int n )
{
    int result = 1;
    if ( n > 0 )
    {
        for ( int i = 1 ; i <= n ; i++ )
        {
            result = result*i;
        }
    }
    return result;
}


int main()
{
    int n;
    //scanf("%d" , &n);
    n = 6;
    int x;
    for ( int i = 0 ; i <= n ; i++ )
    {
        // Use this for triangle-like spacing
        /*for ( int j = n ; j > i ; j-- )
        {
            printf(" ");
        }*/

        for ( int j = 0 ; j <= i ; j++)
        {
            x = fact(i)/(fact(j)*fact(i-j));
            printf("%d ", x);
        }
        printf("\n");
    }

    return 0;
}

// Date : 24.07.24
