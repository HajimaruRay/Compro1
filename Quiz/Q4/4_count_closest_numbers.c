#include <stdio.h>
#include <limits.h>

void main()
{
    int n,k;
    int diff = 0,max = INT_MAX;
    int count = 0;
    scanf("%d",&n);
    int number[n];
    for (int i = 0;i < n;i++)
    {
        scanf("%d ",&number[i]);
    }
    scanf("%d",&k);
    for (int i = 0;i < n;i++)
    {
        diff = k - number[i];
        if (diff < 0)
        {
            diff = abs(diff);
        }
        if (max >= diff)
        {
            if (max > diff){
                count = 0;
            }
            max = diff;
            count++;
        }
    }
    printf("%d\n%d",max,count);
}
