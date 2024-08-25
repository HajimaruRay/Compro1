#include <stdio.h>

void main()
{
    int Balance = 0;
    while (1)
    {
        int Function = 3;
        int Amout = 0;
        scanf("%d %d", &Function, &Amout);

        if (Amout > 50000)
        {
            printf("Transaction exceeds the limit\n");
            continue;
        }
        
        if (Function == 1) //Deposit
        {
            Balance += Amout;
            if (Balance > 100000)
            {
                printf("Account balance is over 100000 Baht\n");
                break;
            }
            printf("Account balance is %d\n", Balance);
        }
        else if (Function == 2) //WithDrow
        {
            Balance -= Amout;
            if (Balance < 0)
            {
                printf("Account balance is less than 0 Baht\n");
                break;
            }
            printf("Account balance is %d\n", Balance);
        }
    }
}