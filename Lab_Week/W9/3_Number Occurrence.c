#include <stdio.h>

int number[2500000];
void main()
{
    int n,pare;
    int j = 0;
    scanf("%d",&n);
    int count[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&pare);

    for (int i = 0;i < n;i++)
    {
        if (number[i] == pare)
        {
            count[j] = i;
            j++;
        }
    }

    for (int i = 0;i < j;i++)
    {
        printf("%d ",count[i]+1);
    }
}