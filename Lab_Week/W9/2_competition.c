#include <stdio.h>

void main()
{
    int n;
    int score[2][100];
    int score1 = 0,score2 = 0;

    scanf("%d",&n);

    for (int i = 0;i < 2;i++)
    {
        for(int j = 0;j < n;j++)
        {
           scanf("%d",&score[i][j]);
        }
    }

    for(int j = 0;j < n;j++)
    {
        if (score[0][j] == score[1][j])
        {
            score1+=1;
            score2+=1;
        }
        if (score[0][j] > score[1][j])
        {
            score1 += 2;
        }
        if (score[0][j] < score[1][j])
        {
            score2 += 2;
        }
    }

    if (score1 > score2)
    {
        printf("Team 1 wins\n");
        printf("Score %d to %d\n",score1,score2);
    }
    else if (score1 < score2)
    {
        printf("Team 2 wins\n");
        printf("Score %d to %d\n",score2,score1);
    }
    else
    {
        printf("Draw game\n");
        printf("Score %d to %d\n",score1,score2);
    }
}
