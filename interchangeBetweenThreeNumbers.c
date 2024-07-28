#include <stdio.h>

int main()
{
    int a = 5;
    int b = 6;
    int c = 7;
    printf("%d %d %d\n" , a , b ,c);
    /* a will have c's value ,
       b will have a's value ,
       c will have b's value
       without using extra variable
    */

    // we will interchange a and c using b as 'container'
    a = a + b + c;
    c = a - ( b + c );
    a = a - ( b + c );
    // half work done
    // printf("%d %d %d\n" , a , b ,c); // you may check

    // Now we will interchange b and c using a as 'container'
    b = a + b + c;
    c = b - ( a + c );
    b = b - ( a + c );
    printf("%d %d %d\n" , a , b ,c);

    return 0;
}

// Date : 14.07.2024
