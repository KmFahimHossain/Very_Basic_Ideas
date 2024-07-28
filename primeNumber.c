#include <stdio.h>

int main()
{
    //We will test if a number is prime or not.
    int a,b;
    printf("Input Number");
    scanf("%d", &a);
    if (a==1)
    {
        printf("Neither prime nor composite");
    }
    else if (a==2)
    {
        printf("2 is Prime");
    }
    else
    {
        for ( b = 2 ; b <= a  ; b = b + 1 )
        {
            if ( a%b ==0 && b!=a )
            {
                printf("%d is Composite\n", a);
                break;
            }
            else if ( b == a)
            {
                printf("%d is Prime",a);
            }
        }
    }

    return 0;
}

//Date : 2020/21
