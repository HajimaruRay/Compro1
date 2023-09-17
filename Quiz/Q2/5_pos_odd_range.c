#include <stdio.h>
#include <limits.h>

void main()
{
    int oddN;
    int mostN = 0, lessN = INT_MAX, diff = 0;

    while (1)
    {
        scanf("%d",&oddN);
        if (oddN <= 0)
        {
            break;
        }
        else if (oddN % 2 != 0 && mostN < oddN)
        {
            mostN = oddN;
        }
        else if (oddN%2 != 0 && lessN > oddN)
        {
            lessN = oddN;
        }
    }
    printf("%d\n%d\n%d",mostN,lessN,mostN-lessN);
}
