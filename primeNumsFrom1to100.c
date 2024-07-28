#include <stdio.h>
int main()
{
    /* This code will print the prime numbers
    between 1 and 100 */

    int a,b;
    for ( a = 2 ; a <= 100 ; a = a + 1)
    {
        for ( b = 2 ; b <= 100 ; b = b + 1)
        {
            if ( a > b && a%b ==0 )
            {
                break;
            }
            else if ( b == a)
            {
                printf("%d\n", a) ;
                break;
            }
        }
    }
    return 0;
}

// Date : 2020/21
