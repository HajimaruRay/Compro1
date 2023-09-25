#include <stdio.h>

void main()
{
    int a,b;
    int free = 0,space = 0,count = 0,number = 0,baseA = 0,spaceB = 0;

    scanf("%d%d",&a,&b);

    if (a < b)
    {
        free = a;
        a = b;
        b = free;
    }
    for (int i = a;i >= b;i--)
    {
        count++;
    }
    baseA = a;
    //up
    for (int i = a;i >= b;i--)
    {
        number = a % 10;
        if (space == 0)
        {
            for (int j = 0;j < count*2;j++)
            {
                printf("%d",number);
            }
            printf("\n");
            space++;
        }
        else if (space != 0)
        {
            for (int j = 0;j < space;j++)
            {
                printf(" ");
            }
            for (int j = 0;j < (count*2)-((space*2)+1);j++)
            {
                printf("%d",number);
            }
            printf("\n");
            space++;
        }
        a--;
    }
    spaceB = space;
    a+=2;
    //down
    for (int i = a;i <= baseA;i++)
    {
        number = a % 10;
        if (spaceB == space)
        {
            for (int j = 0;j < space-2;j++)
            {
                printf(" ");
            }
            for (int j = 0;j < 3;j++)
            {
                printf("%d",number);
            }
        }
        else if (spaceB != space)
        {
            for (int j = 0;j < space-2;j++)
            {
                printf(" ");
            }
            for (int j = 0;j < (count*2)-((space*2)+1)+4;j++)
            {
                printf("%d",number);
            }
        }
        printf("\n");
        space--;
        a++;
    }
}