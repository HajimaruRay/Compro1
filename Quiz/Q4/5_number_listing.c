#include <stdio.h>

void main()
{
    int n;
    int count = 0;
    int number[100001];
    for (int i = 1;i < 100000;i++)
    {
        number[i] = 0;
    }

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&count);
        number[count] += 1;
    }
    for (int i = 1;i < 100000;i++)
    {
        if (number[i] > 0)
        {   
            printf("%d ",i);
        }
    }
}