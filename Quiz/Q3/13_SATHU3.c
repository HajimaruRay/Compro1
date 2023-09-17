#include <stdio.h>

void main()
{
    int Input;
    int Modinput = 0,Sum = 0;

    scanf("%d",&Input);

    while (Input != 0)
    {
        while (Input > 0)
        {
            Modinput = Input % 10;
            Input = Input / 10;
            Sum += Modinput;
        }
        printf("%d\n",Sum);
        Input = Sum;
        if (Input / 10 == 0)
        {
            if (Input != 9)
            {
                printf("No SATHU\n");
            }
            else{
                printf("SATHU\n");
            }
            break;
        }
        Sum = 0;
    }
}