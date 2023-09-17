#include <stdio.h>

void main()
{
    int n,number;
    int i = 0;
    float sumN;
    float aver = 0;
    scanf("%d",&n);

    while (i < n)
    {
        scanf("%d",&number);

        if (number <= 0)
        {
            break;
        }
        sumN += number;
        i++;
    }

    if (number <= 0)
    {
        printf("Not positive\n");
    }
    aver = sumN/i;
    printf("%.4f",aver);
}