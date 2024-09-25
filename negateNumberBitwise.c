#include <stdio.h>

int main()
{
    /*Now we will negate a number bitwise using 2's complement. 2's complement
    is a mathematical operation used to represent negative numbers in binary form.
    To obtain the 2's complement of a binary number , we need to :
    1.Invert all the bits
    2.Add 1 to the inverted result. */

    int n , negative;
    n = 120;
    // scanf("%d" , &n);
    negative = ~n + 1;
    printf("%d\n" , negative);
    return 0;
}

// Date : 25.09.24
