#include <stdio.h>

void main()
{
    int number;
    int count = 0,i = 1;

    scanf("%d", &number);

    while (i <= number)
    {
        if (number % i == 0)
        {
            count++;
        }
        i += 1;
    }

    if (count == 2)
    {
        printf("%d is prime",number);
    }
    else
    {
        printf("%d is not prime",number);
    }

}