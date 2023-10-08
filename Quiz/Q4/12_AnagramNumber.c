#include <stdio.h>

int a[1000],b[1000];
void main()
{
    int countA = 0,countB = 0,count = 0,notcount = 0;
    int x;

    for (int i = 0;i < 1000;i++)
    {
        a[i] = 0;
        b[i] = 0;
    }

    //input
    for (int i = 0;i < 1000;i++)
    {
        scanf("%d",&x);

        if (x < 0)
        {
            break;
        }
        a[x] = 1;
    }
    for (int i = 0;i < 1000;i++)
    {
        scanf("%d",&x);

        if (x < 0)
        {
            break;
        }
        b[x] = 1;
    }

    //check
    for (int i = 0;i < 1000;i++)
    {
        if (a[i] > 0)
        {
            countA++;
        }
        if (b[i] > 0)
        {
            countB++;
        }
    }
    for (int i = 0;i < 1000;i++)
    {
        if (a[i] > 0 && b[i] > 0)
        {
            count++;
        }
        if ((a[i] > 0 && b[i] < 1) || (a[i] < 1 && b[i] > 0))
        {
            notcount++;
        }
    }

    //debug
    /*for (int i = 0;i < 1000;i++)
    {
        if (a[i] == 1 && b[i] == 1)
        {
            printf("a[%d] = %d b[%d] = %d\n",i,a[i],i,b[i]);
        }
    }*/

    //print
    if (count == countA && notcount == 0 && count != 0)
    {
        printf("A and B are anagrams \n");
    }
    else
    {
        printf("A and B are not anagrams \n");
    }
    printf("A %d\nB %d",countA,countB);
}
