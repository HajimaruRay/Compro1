#include <stdio.h>

void main()
{
    int row,col,number;
    scanf("%d%d",&row ,&col);
    int matrix[row][col];

    for (int rowC = 0;rowC < row;rowC++)
    {
        for (int colC = 0;colC < col;colC++)
        {
            scanf("%d",&matrix[rowC][colC]);
        }
    }
    scanf("%d",&number);
    for (int rowC = 0;rowC < row;rowC++)
    {
        for (int colC = 0;colC < col;colC++)
        {
            if (rowC%2 == 0 && colC%2 != 0)
            {
                matrix[rowC][colC] += number;
            }
            else if (rowC%2 != 0 && colC%2 == 0)
            {
                matrix[rowC][colC] += number;
            }
        }
    }
    for (int rowC = 0;rowC < row;rowC++)
    {
        for (int colC = 0;colC < col;colC++)
        {
            printf("%d ",matrix[rowC][colC]);
        }
        printf("\n");
    }
}
