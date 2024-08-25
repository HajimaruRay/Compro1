#include <stdio.h>

void main()
{
    //Input number count zone
    int CountOfNumber;
    for(;;)
    {
        printf("Enter number of numbers : ");
        scanf("%d",&CountOfNumber);

        if (CountOfNumber >= 2)
        {
            break;
        }
        else
        {
            printf("This number must more than 2\n");
        }
    }

    //Input Number zone
    int arr_number[CountOfNumber];
    for(int i = 0;i < CountOfNumber;i++)
    {
        scanf("%d",&arr_number[i]);
    }

    //Suffle zone
    for(int i = 1;;i++)
    {
        if (arr_number[i-1] > arr_number[i])
        {
            int clone = arr_number[i];
            arr_number[i] = arr_number[i-1];
            arr_number[i-1] = clone;
            i=0;
        }
        if (i == CountOfNumber+1)
        {
            break;
        }
    }

    //print zone
    for(int i = 0;i < CountOfNumber;i++)
    {
        printf("%d ",arr_number[i]);
    }
}