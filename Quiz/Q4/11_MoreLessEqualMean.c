#include <stdio.h>

void main()
{
    int n;
    int avg = 0,sum = 0,less = 0,more = 0,equal = 0;
    scanf("%d",&n);
    int number[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
        sum += number[i];
    }
    avg = sum/n;
    for (int i = 0;i < n;i++)
    {
        if (number[i] < avg)
        {
            less++;
        }
        else if (number[i] > avg)
        {
            more++;
        }
        else
        {
            equal++;
        }
    }

    printf("%d\n%d %d %d",avg,more,less,equal);
}
