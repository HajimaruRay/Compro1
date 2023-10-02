#include <stdio.h>

void main()
{
    int n,x,y;
    int count = 0;
    double avg = 0;
    scanf("%d",&n);
    int number[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d%d",&x,&y);
    if (x > y)
    {
        int free = 0;
        free = x;
        x = y;
        y = free;
    }
    for (int i = 0;i < n;i++)
    {
        if (x <= number[i] && number[i] <= y)
        {
            count++;
            avg = avg + number[i];
        }
    }
    avg = avg/count;
    if (count > 0)
    {
        printf("%d\n",count);
        printf("%.2f",avg);
    }
    else
    {
         printf("%d\nnone",count);
    }
}
