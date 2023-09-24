#include <stdio.h>
#include <limits.h>

void main()
{
    int n;
    int max = INT_MIN;
    scanf("%d",&n);
    int number[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
        if (max < number[i])
        {
            max = number[i];
        }
    }
    for (int i = max;i > 0;i--)
    {
        for (int j = 0;j < n;j++)
        {
            if (i <= number[j])
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
