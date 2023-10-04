#include <stdio.h>
#include <limits.h>

void main()
{
    int n,k;
    int max = INT_MIN,maxP;
    scanf("%d %d",&n,&k);
    int vote[k];
    int people[n+1];
    int score[n+1];

    for (int i = 0;i < n+1;i++)
    {
        score[i] = 0;
    }

    for (int i = 0;i < k;i++)
    {
        scanf("%d",&vote[i]);
    }

    for (int i = 1;i <= n;i++)
    {
        for (int j = 0;j < k;j++)
        {
            if (i == vote[j])
            {
                score[i] += 1;
            }
        }
    }

    for (int i = 0;i <= n;i++)
    {
        if (max < score[i])
        {
            max = score[i];
            maxP = i;
        }
    }
    printf("%d\n%d",maxP,max);
}