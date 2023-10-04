#include <stdio.h>

void main()
{
    int n, m;
    int Most = 0, Min = 0;
    scanf("%d", &n);
    int number[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        if (number[i] > m)
        {
            Most += number[i];
        }
        else if (number[i] < m)
        {
            Min += number[i];
        }
    }

    if (Most >= Min)
    {
        printf("%d", Most);
    }
    else
    {
        printf("%d", Min);
    }
}