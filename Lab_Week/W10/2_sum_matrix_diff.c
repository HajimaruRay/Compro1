#include <stdio.h>

void main()
{
    int n;
    int sum = 0;
    int col = 0,row = 0,count = 1,count1 = 0;
    scanf("%d",&n);
    int matrix[n][n];
    int keep[n][n-1];

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (i != j)
            {
                keep[row][col] = matrix[i][j];
                col++;
                if (col == n-1)
                {
                    row++;
                    col = 0;
                }
            }
        }
    }
    printf("\n");
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n-1;j++)
        {
            printf("%d ",keep[i][j]);
        }

        printf("\n");
    }
}
