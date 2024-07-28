#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x;
    int count0 = 0, count1 = 0;
    int win0 = 0, win1 = 0, draw = 0;

    /* An interesting overview on probability-
    In every lap of the 'for loop' 0 or 1 comes.
    At any given time, if this 'toss' is paused,
    the number that appeared more times , wins.
    we will observe how many cases 0 wins and in how many 1 wins.
    */

    for ( int i = 1 ; i <= 100 ; i++ )
    {
        x = rand() % 2;

        // Total count of 0 or 1 at that moment
        if ( x == 0)
        {
            count0++;
        }
        else if ( x == 1)
        {
            count1++;
        }

        // winning of 0 or 1 depending on total count at that moment
        if ( count0 > count1 )
        {
            win0++;
        }
        else if ( count0 < count1 )
        {
            win1++;
        }
        else if ( count0 == count1 )
        {
            draw++;
        }

        //TossResult ZeroCount OneCount ZeroWon OneWon Draw at that moment
        printf("%d %d %d ", x, count0 , count1);
        printf("%d %d %d\n" , win0 , win1 , draw);
    }

    printf("\n\nTotal Zero: %d\nTotal One : %d\n" , count0 , count1);
    printf("ZeroWon: %d\nOneWon : %d\nDraw: %d\n" , win0 , win1 , draw);

    return 0;
}

// Date : 23.07.24
