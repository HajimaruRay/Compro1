#include <stdio.h>

void main()
{
    int number1,number2;

    scanf("%d%d",&number1,&number2);

    if (number1 == 1)
    {
        if (number2 == 2)
        {
            printf("2 ");
        }
        else if (number2 == 3)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
    else if (number1 == 2)
    {
        if (number2 == 1)
        {
            printf("1 ");
        }
        else if (number2 == 3)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }
    else if (number1 == 3)
    {
        if (number2 == 1)
        {
            printf("2 ");
        }
        else if (number2 == 2)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}
