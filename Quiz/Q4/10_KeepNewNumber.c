#include <stdio.h>

int number[1000000], fin[1000000];
void main()
{
    int n;
    int allcount = 0, count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        number[i] = 0;
    }
    for (int i = 0; i < 1000000; i++)
    {
        scanf("%d", &n);

        if (n <= 0)
        {
            break;
        }

        allcount++;
        if (number[n] == 0)
        {
            number[n] = 1;
            fin[count] = n;
            count++;
            continue;
        }
    }
    printf("%d\n", allcount);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", fin[i]);
    }
}