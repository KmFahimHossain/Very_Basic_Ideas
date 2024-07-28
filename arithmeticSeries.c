#include <stdio.h>

int main()
{
    /* We will print the arithmetic series for any given 1st term (a),
    common difference (d), and number of terms (n). We will also calculate
    the sum. */

    int a , n , d , sum = 0;
    a = 5;
    d = 2;
    n = 5;
    // scanf("%d %d %d" , &a , &d , &n);
    for ( int i = 0 ; i < n ; i++)
    {
        if ( i < n - 1 )
        {
            printf("%d + " , a);
        }
        else
        {
             printf("%d = " , a);
        }
        sum = sum + a;
        a = a + d;
    }
    printf("%d" , sum); // 5 + 7 + 9 + 11 + 13 = 45

    return 0;
}

// Date : 15.07.24
