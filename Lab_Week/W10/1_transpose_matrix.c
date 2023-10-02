#include <stdio.h>

void main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int matrix[n][k];

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < k;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0;i < k;i++)
    {
        for (int j = 0;j < n;j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}
