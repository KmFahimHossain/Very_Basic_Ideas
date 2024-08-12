#include <stdio.h>
#include <math.h>

int main()
{
    /* This code will print all the prime numbers between 3 and 10000
    in a more efficient way */

    int a;
    int limit = 100000;
    for ( a = 3 ; a <= limit ; a++)
    {
        if ( a%2 == 0) // even numbers will not get into loop
        {
            continue;
        }

        else
        {
            int d = sqrt(a);
            for ( int c = 3 ; c <= d + 2 ; c = c + 2 )
            {
                if ( a%c == 0)
                {
                    break;
                }
                else if ( c >= d )
                {
                    printf("%d\n" , a);
                    break;
                }
            }
        }
    }

    return 0;

    /* this code took 3.891 s is my machine to print all prime numbers between 3 and 100000 ,
    whereas the 'inefficient' method takes around 11 to 12 s */
}

// Date : 12.08.2024
