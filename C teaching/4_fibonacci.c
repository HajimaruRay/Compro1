#include <stdio.h>

void main()
{
    int number,n;
    int fibo1 = 1,fibo2 = 2;
    int fibo = 0,count = 0;

    scanf("%d",&n);

    for (int j = 0;j < n;j++)
    {
        scanf("%d",&number);

        if (number <= 0 || number > 30)
        {
            printf("you run it %d times",count);
            break;
        }
        else
        {
            printf("Fibonacci = ");
        }
        
        for (int i = 0;i < number;i++)
        {
            if (i == 0)
            {
                printf("%d ",fibo1);
                continue;
            }
            else if (i == 1)
            {
                printf("%d ",fibo2);
                continue;
            }
            fibo = fibo1 + fibo2;
            printf("%d ",fibo);
            fibo1 = fibo2;
            fibo2 = fibo;
        }
        printf("\n");
        count++;
        fibo = 0;
        fibo1 = 1;
        fibo2 = 2;
    }
}