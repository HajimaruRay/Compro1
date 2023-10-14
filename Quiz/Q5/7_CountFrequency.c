#include <stdio.h>

int arr[100000], number[100000], countS[100000];

void main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    for (int i = 0; i < 100000; i++)
    {
        number[i] = 0;
        countS[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        for (int j = 0; j < 100000; j++)
        {
            if (arr[i] != number[j])
            {
                if (number[j] == 0)
                {
                    number[j] = arr[i];
                    count++;
                    countS[j]++;
                    break;
                }
            }
            else if (arr[i] == number[j])
            {
                countS[j]++;
                break;
            }
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d %d\n", number[i], countS[i]);
    }
}