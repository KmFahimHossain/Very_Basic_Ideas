#include <stdio.h>

int main()
{
    //Creating the array
    int n = 10;
    int array[10] = { 3,4,2,2,5,6,9,3,4,8};

    // Output of the array , before sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , array[i]);
    }
    printf("\n");

    /* We will assume the array as a box of numbers in certain order.
    We will replace the first number of the box with the largest number inside the box.
    Then we will shrink the box by one step forward */
    for ( int i = 0 ; i < n ; i++)
    {
        // Finding the maximum number
        int maxIndex = i;
        for ( int j = i ; j < n ; j++)
        {
            if ( array[j] > array[maxIndex])
            {
                maxIndex = j;
            }
        }
        // Swapping it with the first number of the box
        int temp = array[i];
        array[i] = array[maxIndex];
        array[maxIndex] = temp;
    }

    // Output of the array , after sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , array[i]);
    }

    return 0;
}

// Date : 06.09.24
