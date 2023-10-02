#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int number1[n],number2[n];
    int player1 = 0,player2 = 0;

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number1[i]);
    }

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number2[i]);
    }

    for (int i = 0;i < n;i++)
    {
        if (number1[i] == 1)
        {
            if (number2[i] == 2)
            {
                player2++;
            }
            else if (number2[i] == 3)
            {
                player1++;
            }
        }
        else if (number1[i] == 2)
        {
            if (number2[i] == 1)
            {
                player1++;
            }
            else if (number2[i] == 3)
            {
                player2++;
            }
        }
        else if (number1[i] == 3)
        {
            if (number2[i] == 1)
            {
                player2++;
            }
            else if (number2[i] == 2)
            {
                player1++;
            }
        }
    }

    printf("%d %d",player1,player2);
    if (player1 > player2)
    {
        printf("\n1");
    }
    else if (player1 < player2)
    {
        printf("\n2");
    }
    else
    {
        printf("\n0");
    }
}
