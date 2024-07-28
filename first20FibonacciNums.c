#include <stdio.h>

int main()
{
    /* In mathematics, the Fibonacci sequence is a sequence
    in which each number is the sum of the two preceding ones.
    This code will print first n Fibonacci Numbers. */

    int a,b,c,n = 20;
    //scanf("%d" , &n);
    a = 0;
    b = 1;
    printf("%d\n%d\n" , a, b) ;
    for ( int i = 1 ; i <= n - 2 ; i++ )
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}

// First written : 2019/20 , Updated : 28.07,24
