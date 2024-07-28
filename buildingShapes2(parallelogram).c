#include <stdio.h>

int main()
{
    /*
    we will try to print this shape where 2n-1 in the
    number of rows.

                        *
                        **
                        ***
                        ****
                        *****
                        ******
                         *****
                          ****
                           ***
                            **
                             *
    */

    int n;
    //scanf("%d", &n);
    n = 6;
    int i;

    // print first half
    for ( i = 1 ; i <= n ; i++ )
    {
        for ( int j = 0 ; j < i ; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // print second half
    for ( i = 1 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < i ; j++)
        {
            printf(" ");
        }
        for ( int j = n - 1 ; j >= i ; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// Date : 24.07.24
