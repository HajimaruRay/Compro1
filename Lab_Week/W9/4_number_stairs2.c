#include <stdio.h>

void main()
{
    int number[501];
    int count = 0,space = 0,countP = 1;

    for (int i = 0;i < 501;i++)
    {
        scanf("%d",&number[i]);
        if(number[i] >= 10 || number[i] < 0)
        {
            break;
        }
        count++;
    }
    for (int i = count;i > 0;i--)
    {
        space = i;
        for (int j = 0;j < space-1;j++)
        {
            printf(" ");
        }
        for (int a = 0;a < countP;a++)
        {
            printf("%d",number[countP-1]);
        }
        printf("\n");
        countP++;;
    }
}
