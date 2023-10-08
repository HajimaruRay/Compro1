#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int number[n],find[n];

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
        find[i] = 0;
    }
    for (int  i = 0;i < n;i++)
    {
        if (number[i] > 1 && number[i-1] == 1 && number[i+1] == 1)
        {
            printf("index : %d = %d [ ",i+1,number[i]);
            find[i] = 1;
            for (int j = 0;j < n;j++)
            {
                if (find [j] == 1)
                {
                    printf("%d ",number[i]);
                }
                else
                {
                    printf("0 ");
                }
            }
            find[i] = 0;
            printf("] \n");
        }
    }
}
