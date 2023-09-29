#include <stdio.h>

void main()
{
    int n;
    int count = 1;

    scanf("%d",&n);
    int count1 = n;

    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == count && j == count || j == count1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        count++;
        count1--;
        printf("\n");
    }
}