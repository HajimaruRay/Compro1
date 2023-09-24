#include <stdio.h>

void main()
{
    int number;
    int sum = 1;

    for(;;)
    {
        scanf("%d",&number);
        sum = 1;
        if (number <= 0)
        {
            break;
        }
        for (int i = number;i > 0;i--)
        {
            sum *= i;
            if (i == 1)
            {
                printf("%d",i);
            }
            else
            {
                printf("%d x ",i);
            }   
        }
        printf("\n%d\n",sum);
    }   
}