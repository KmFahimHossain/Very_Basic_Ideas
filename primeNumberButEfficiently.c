#include <stdio.h>
#include<math.h>

int main()
{
    /*We will test if a number is prime or not in a more efficient way.
    First, using a loop we will try to divide n by 2 until n-1. If n is divisible by any
    of them, we will come out of the loop by using break. If the loop is executed fully, then n is prime.
    we can make the program faster, if we consider the fact that once we divide by 2, we need not divide
    by any other even numbers. So the loop can run from 3 until n-1 and only for the odd numbers.
    we can further consider the fact that when n is divisible by k, we need not divide again by n/k.
    This means we have to run the loop until the square root of n and of course for the odd numbers
    within that range. */

    int n;
    n = 499999; // 9973 is a prime
    //scanf("%d", &a);
    int a = sqrt(n);
    if ( n%2 == 0)
    {
        printf("Not prime");
    }
    else
    {
        for ( int b = 3 ; b <= a+1 ; b = b+2 )
        {
            if ( n%b == 0 )
            {
                printf("Not prime");
                break;
            }
            else if ( b >= a )
            {
                printf("Prime");
            }
        }
    }

    return 0;
}

//Date : 12.08.2024
