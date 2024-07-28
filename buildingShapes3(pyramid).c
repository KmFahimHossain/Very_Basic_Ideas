#include <stdio.h>

int main()
{
    /*
    we will try to print this pyramid shape where n in the
    number of rows.

                          *
                         ***
                        *****
                       *******
                      *********
                     ***********
    */

    int n;
    //scanf("%d", &n);
    n = 6;
    for ( int i = 1 ;  i <= n ; i++ )
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
