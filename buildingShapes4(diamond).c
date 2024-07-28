#include <stdio.h>

int main()
{
    /*
    we will try to print this shape where 2n-1 in the
    number of rows.

                         *
                        ***
                       *****
                      *******
                     *********
                    ***********
                     *********
                      *******
                       *****
                        ***
                         *
    */

    int n;
    //scanf("%d", &n);
    n = 6;
    int i;

    // print first half
    for ( i = 1 ;  i <= n ; i++ )
    {
        // print space
        for ( int j = n ; j > i ; j--)
        {
            printf(" ");
        }

        // print star
        for ( int j = 0 ; j < (2*i-1) ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // print second half
    for ( i = i - 2 ; i > 0 ; i--)
    {
        for ( int j = n ; j > i ; j--)
        {
            printf(" ");
        }

        for ( int j = 0 ; j < (2*i-1) ; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

// Date : 24.07.24
