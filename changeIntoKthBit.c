#include <stdio.h>

int main()
{
    /* In this code we will set the Kth bit of an unsigned int into 1 or 0,
    we will also see how to flip that particular bit */

    // Set to 1
    unsigned int a;
    int k;
    a = 11; // Binary form is 00.......1011
    k = 3; // we will change the 3rd bit into 1 , and it will become 15
    unsigned int b = a | ( 1 << (k-1) );
    printf("%u %u\n" , a ,b);

    // Set to 0
    a = 11; // Binary form is 00.......1011
    k = 2; // we will change the 2nd bit into 0 , and it will become 9
    b = a & ~( 1 << (k-1) );
    printf("%u %u\n" , a ,b);

    // flip that bit
    a = 11; // Binary form is 00.......1011
    k = 3; // we will flip the 3rd bit, and it will become 15
    b = a ^ ( 1 << (k-1) );
    printf("%u %u\n" , a ,b);

    a = 11; // Binary form is 00.......1011
    k = 2; // we will flip the 2nd bit, and it will become 9
    b = a ^ ( 1 << (k-1) );
    printf("%u %u\n" , a ,b);

    return 0;

}

// Date : 22.7.24
