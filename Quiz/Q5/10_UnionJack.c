#include <stdio.h>

void main()
{
    int n;

    scanf("%d",&n);
    int count1 = n;

    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == j-1 || i == j || i == j+1 || j == count1-1 || j == count1 || j == count1+1 || i == (n/2)-1 || i == (n/2) || i == (n/2)+1 || i == (n/2)+2 || i == (n/2)+3 || j == (n/2)-1 || j == (n/2) || j == (n/2)+1 || j == (n/2)+2 || j == (n/2)+3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        count1--;
        printf("\n");
    }
}
