#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    int number[n][n];

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            sum = sum + abs(number[i][j] - number[j][i]);
        }
    }

    printf("%d",sum/2);

}