#include <stdio.h>

void main()
{
    int n;
    int want = 0,count = 0;
    scanf("%d",&n);
    int number[n];
    int same[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&want);

    for (int i = 0;i < n;i++)
    {
        if (number[i] == want)
        {
            same[count] = i+1;
            count++;
        }
    }
    if (count == 0)
    {
        printf("0");
    }
    else
    {
        for (int i = 0;i < count;i++)
        {
            printf("%d ",same[i]);
        }
    }
}