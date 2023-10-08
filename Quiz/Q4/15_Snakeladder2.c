#include <stdio.h>

void main()
{
    int n,x;
    int sum = 0;
    scanf("%d",&n);
    int nStep[n+1],CountA[n+1];

    for (int i = 1;i <= n;i++)
    {
        CountA[i] = 0;
    }

    //Input phase
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&nStep[i]);
    }
    //prepare phase
    printf("A ");
    for(int i = 1;i <= n;i++)
    {
        printf("%d ",nStep[i]);
    }
    printf("\n");

    //play Gound
    for(;;)
    {
        scanf("%d",&x);
        sum += x;
        sum += nStep[sum];
        if (sum >= n)
        {
            sum = n;
        }
        else if (sum < 0)
        {
            sum = 1;
        }

        if (sum == 0)
        {
            printf("A ");
        }
        else
        {
            printf("X ");
        }
        CountA[sum] = 1;
        
        for (int i = 1;i <= n;i++)
        {  
            if (CountA[i] == 1)
            {
                printf("A ");
                CountA[sum] = 0;
            }
            else
            {
                printf("%d ",nStep[i]); 
            }
        }
        printf("\n");
        if (sum == n)
        {
            break;
        }
    }
}