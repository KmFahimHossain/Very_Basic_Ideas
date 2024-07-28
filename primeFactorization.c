#include <stdio.h>

int main()
{
    /* Prime factorization of any number means to represent
    that number as a product of prime numbers.
    A prime number is a number that has exactly two factors,
    1 and the number itself.
    For example, the prime factorization of 18 = 2 × 3 × 3. */

    int a,b,c;
    a = 18;
    //scanf("%d",&a);
    printf("%d =  1", a);
    for ( b = 2 ; b <= a ; b++)
    {
        for ( c = 2 ; c <= b ; c++)
        {
            if ( c<b && b%c==0)
            {
                break;
            }
            else if ( c ==b && a%c==0)
            {
                printf(" x %d", c);
                a = a/c;
                c = c-1;
            }
        }
    }

    return 0;
}

// Date : 2023
