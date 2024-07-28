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

    for ( i = 1 ;  i <= n ; i++ )
    {

        for ( int j = 0 ; j < i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for ( i = i - 2 ;  i > 0 ; i-- )
    {

        for ( int j = 0 ; j < i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// Date : 24.07.24
