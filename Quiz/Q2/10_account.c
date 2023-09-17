#include <stdio.h>

void main()
{
    int money;
    int diff = 0, paymentC = 0, incomeC = 0, income = 0, payment = 0;

    while(1)
    {
        scanf("%d",&money);

        if (money == 0)
        {
            break;
        }

        else if (money > 0)
        {
            incomeC++;
            income += money;
        }
        else
        {
                paymentC++;
                payment += money;
        }
    }

    printf("%d %d\n",incomeC,paymentC);
    printf("%d\n%d\n",income,payment);
    diff = income + payment;

    if (diff < 0)
    {
        printf("credit");
    }
    else
    {
        printf("debit");
    }
}