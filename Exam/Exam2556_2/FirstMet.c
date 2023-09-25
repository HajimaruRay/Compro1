#include <stdio.h>

void main()
{
    int number[255];
    int x,y;
    int found = -1,get = 0,count = 0;

    scanf("%d%d",&x,&y);

    for(int i = 0;i < 255;i++)
    {
        scanf("%d",&number[i]);

        if (number[i] < 0)
        {
            break;
        }
        if(number[i] % x == 0 && number[i] % y == 0 && found == -1)
        {
            found = 2;
            get = number[i];
        }
        else if (number[i] % x == 0 && found == -1)
        {
            found = 0;
            get = number[i];
        }
        else if(number[i] % y == 0 && found == -1)
        {
            found = 1;
            get = number[i];
        }
        count++;
    }
    if (found == -1)
    {
        printf("%d",number[count]);
    }
    else
    {
        printf("%d\n%d",get,found);
    }
    
}