#include <stdio.h>

void main()
{
    int k;
    int sum1 = 0, sum2 = 0;
    scanf("%d", &k);
    int arr[k][k];

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (j >= i + 1)
            {
                sum1 += arr[i][j];
            }
            else if (j <= i - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }

    printf("%d\n%d", sum1, sum2);
}
