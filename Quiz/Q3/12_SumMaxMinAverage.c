#include <stdio.h>
#include <limits.h>

void main()
{
    int Input[100];
    int most = INT_MIN, min = INT_MAX, sum = 0, mostGroup = 0, minGroup = 0, Group = 0, AllSum = 0;
    double Average = 0;
    int n;

    while (1)
    {
        scanf("%d",&n);

        if (n <= 0)
        {
            printf("%d %d\n",mostGroup,most);
            printf("%d %d\n",minGroup,min);
            printf("%.2f",Average);
            break;
        }
        else
        {
            Group++;
        }

        for (int i = 0;i < n;i++)
        {
            scanf("%d",&Input[i]);
            sum += Input[i];
            
        }
        printf("%d\n",sum);

        if (sum < min)
        {
            min = sum;
            minGroup = Group;
        }
        if (sum > most)
        {
            most = sum;
            mostGroup = Group;
        }
        AllSum += sum;
        Average = (double)AllSum / (double)Group;
        sum = 0;
    }
}