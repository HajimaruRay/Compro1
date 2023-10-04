#include <stdio.h>

void main()
{
    int n;
    int m;
    scanf("%d",&n);
    int number[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&m);

    for (int i = 0;i < n;i++)
    {
        number[i] += m;
    }

    if (m >= 0)
    {
        for (int i = 0;i < n;i++)
        {
            printf("%d ",number[i]);
        }
    }
    else
    {
        for (int i = n-1;i >= 0;i--)
        {
            printf("%d ",number[i]);
        }
    }
}