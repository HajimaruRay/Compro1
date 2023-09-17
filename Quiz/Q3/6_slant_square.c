#include <stdio.h>

void main()
{
    int n = 0;
    int space = 0;
    scanf("%d",&n);

    for (int l = 0;l < n;l++)
    {
        if (space == 3)
        {
            space = 0;
        }
        for (int a = 0;a < space;a++)
        {
            printf(" ");
        }
        space++;
        for (int i = 0;i < n/3;i++)
        {
            printf("*");
            for (int j = 0;j < 2;j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
