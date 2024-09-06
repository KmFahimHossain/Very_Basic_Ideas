#include <stdio.h>

int main()
{
    /* Q : Write a program that will play a game with you. The program will
    ask you to secretly assume a number between 0 and 1023. Then it will
    ask you a number of questions. Each question will be of type whether
    the assumed number is smaller than, or greater than, or equal to a certain
    number. Your answer to the question will be true or false.
    You can use 1 to denote true and 0 to denote false. After a range of questions,
    the program will eventually give you your assumed number as output.*/

    int num;
    int low = 0 , mid = 512 , high = 1023;
    int direction = 0;
    printf("Lets begin! \nGuess a number between 0 and 1023\nInput 1 when done\n");
    int start = 0;
    scanf("%d" , &start);
    while (start)
    {
        printf("Is your number greater than %d?\nWrite 1 if true , 0 if false, 2 if this is your guessed number\n" , mid);
        scanf("%d", &direction);
        if ( direction == 0)
        {
            high = mid;
            mid = low + (high - low)/2;
        }
        else if ( direction == 1)
        {
            low = mid;
            mid = low + (high - low)/2;
        }
        else if ( direction == 2)
        {
            printf("Did it. I won");\
            break;
        }
    }

    return 0;

}

// Date : 04.09.2024
