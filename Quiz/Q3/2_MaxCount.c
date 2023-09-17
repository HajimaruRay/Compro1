#include <stdio.h>
#include <limits.h>

void main()
{
    int CanK = 0,end = 1;
    int k,n,number;
    int mostgroup = 0,mostnumber = INT_MIN;
    scanf("%d %d",&k,&n);

    while (1)
    {
        scanf("%d",&number);
        if (number == 0)
        {
            if (end == n)
            {
                break;
            }
            else
            {
                end++;
               
            }
            CanK = 0;
        }

        if (number > 0 && number % k == 0)
        {
            CanK++;
            //printf("%d\n",CanK);
        }

        if (mostnumber <= CanK)
        {
            mostnumber = CanK;
            mostgroup = end;
        }
    }

    printf("%d %d",mostgroup,mostnumber);
}