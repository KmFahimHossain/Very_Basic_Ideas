#include <stdio.h>

int main()
{
    /* Assume , we have an array. We want to sort the array , but not directly. That means,
    we will leave the array unchanged. But there will be a way for getting the sorted array
    as output. This can be done using 'Array Indirect Sorting'.
    We will create a new array containing the indexes of the elements of the previous array.
    Now , we will systematically arrange the indexes in a order that , from this arrangement
    we can easily output the sorted array. To do this , we will use the same technique from
    'arraySorting'.
    */

    //Creating the array and indexArray
    int n = 10;
    int array[10] = { 3,4,2,2,5,6,9,3,4,8 };
    int indexArray [10] = { 0,1,2,3,4,5,6,7,8,9 };

    // Output of the array , before sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , array[i]);
    }
    printf("\n");

    // Output of the indexArray , before sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , indexArray[i]);
    }
    printf("\n\n");

    // Start
    for ( int i = 0 ; i < n ; i++)
    {
        // Finding the maximum number's index
        for ( int j = i ; j < n ; j++)
        {
            int maxIndex = i;
            if ( array[indexArray[j]] > array[indexArray[maxIndex]])
            {
                maxIndex = j;
            }
            // Swapping it with the index of the first number of the box
            int temp = indexArray[maxIndex];
            indexArray[maxIndex] = indexArray[i];
            indexArray[i] = temp;
        }
    }

    // Output of the array , after sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , array[i]);
    }
    printf("\n");

    // Output of the indexArray , after sorting
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , indexArray[i]);
    }
    printf("\n");

    // Output the sorted array using indexArray
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d " , array[indexArray[i]]);
    }
    printf("\n");

    return 0;
}

// Date : 07.09.2024
