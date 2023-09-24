#include <stdio.h>
#include <limits.h>

void main()
{
    int n,k;
    int max = INT_MIN;
    int sum = 0,kM = 0,kP = 3,count = 0;
    scanf("%d%d",&n,&k);
    int road[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&road[i]);
    }
    kM = k*2;
    if (k > 1)
    {
       kP += k;
    }

    for (int i = 0;i < n-kM;i++)
    {
        sum = 0;
        for (int j = 0;j < kP;j++)
        {
            sum += road[j+count];
        }
        count++;
        if (max < sum)
        {
            max = sum;
        }
    }
    printf("%d",max);
}