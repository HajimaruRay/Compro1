#include <stdio.h>
//Test

void main()
{
    int n;
    int swap = 0;
    scanf("%d",&n);
    int arr[n][n];

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    scanf("%d",&swap);

    if (swap == 1)
    {
        for (int i = 0;i < n;i++)
        {
            for (int j = n/2; j < n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            for (int j = 0;j < n/2;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else if (swap == 2)
    {
        for (int i = n/2;i < n;i++)
        {
            for (int j = 0;j < n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        for (int i = 0;i < n/2;i++)
        {
            for (int j = 0;j < n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
}