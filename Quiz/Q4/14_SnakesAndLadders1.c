#include <stdio.h>

void main()
{
    int nStep,x;
    int sum = 0;
    int a[100000];

    for (int i = 0;i < 100000;i++)
    {
        a[i] = 0;
    }

    scanf("%d",&nStep);

    printf("A ");
    for(int i = 0;i < nStep;i++)
    {
        printf("0 ");        
    }
    printf("\n");

    for(;;)
    {
        scanf("%d",&x);
        sum += x;
        if (sum > nStep)
        {
            sum = nStep;
        }
        a[sum] = 1;

        printf("X ");
        for (int i = 1;i <= nStep;i++)
        {
            if (a[i] == 0)
            {
                printf("0 ");
            }
            else if (a[i] == 1)
            {
                printf("A ");
            }
        }
        if (sum == nStep)
        {
            break;
        }
        a[sum] = 0;
        printf("\n");
    }
}