#include <stdio.h>

int main()
{
    // We will find if a number is in an array or not using binary search
    int a[15] = { 2,3,4,7,8,9,10,13,15,71,78,99,100,111,112 };
    int x = 100;
    //scanf("%d" , &x);
    int left = 0 , right = 14 , mid = (left + right)/2;
    while (1)
    {
        if ( x < a[mid] )
        {
            right = mid - 1;
        }
        else if ( x > a[mid] )
        {
            left = mid + 1;
        }
        else if ( x == a[mid] )
        {
            printf("Found!");
            break;
        }
        mid = (left + right)/2;

        if ( left > right )
        {
            printf("Not Found!");
            break;
        }
    }

    return 0;
}

// Date : 06.09.2024
