#include <stdio.h>

void main()
{
    int team1,team2,team3;
    int door1,door2,teamS1,teamS2;
    int score1 = 0,score2 = 0,score3 = 0;
    int got1 = 0,got2 = 0,got3 = 0;
    int lost1 = 0,lost2 = 0,lost3 = 0;

    for (int i = 0;i < 6;i++)
    {
        scanf("%d%d%d%d",&teamS1,&teamS2,&door1,&door2);

        if (teamS1 == 1 && teamS2 == 2)  //team1 vs team2
        {
            got1 += door1;
            lost1 += door2;
            got2 += door2;
            lost2 += door1;

            if (door1 > door2)
            {
                score1 += 3;
            }
            else if (door2 > door1)
            {
                score2 += 3;
            }
            else if (door1 == door2)
            {
                score1++;
                score2++;
            }
        }
        else if (teamS1 == 1 && teamS2 == 3)  //team1 vs team3
        {
            got1 += door1;
            lost1 += door2;
            got3 += door2;
            lost3 += door1;

            if (door1 > door2)
            {
                score1 += 3;
            }
            else if (door2 > door1)
            {
                score3 += 3;
            }
            else if (door1 == door2)
            {
                score1++;
                score3++;
            }
        }
        else if (teamS1 == 2 && teamS2 == 1)  //team2 vs team1
        {
            got2 += door1;
            lost2 += door2;
            got1 += door2;
            lost1 += door1;

            if (door1 > door2)
            {
                score2 += 3;
            }
            else if (door2 > door1)
            {
                score1 += 3;
            }
            else if (door1 == door2)
            {
                score2++;
                score1++;
            }
        }
        else if (teamS1 == 2 && teamS2 == 3)  //team2 vs team3
        {
            got2 += door1;
            lost2 += door2;
            got3 += door2;
            lost3 += door1;

            if (door1 > door2)
            {
                score2 += 3;
            }
            else if (door2 > door1)
            {
                score3 += 3;
            }
            else if (door1 == door2)
            {
                score2++;
                score3++;
            }
        }
        else if (teamS1 == 3 && teamS2 == 1)  //team3 vs team1
        {
            got3 += door1;
            lost3 += door2;
            got1 += door2;
            lost1 += door1;

            if (door1 > door2)
            {
                score3 += 3;
            }
            else if (door2 > door1)
            {
                score1 += 3;
            }
            else if (door1 == door2)
            {
                score3++;
                score1++;
            }
        }
        else if (teamS1 == 3 && teamS2 == 2)  //team3 vs team2
        {
            got3 += door1;
            lost3 += door2;
            got2 += door2;
            lost2 += door1;

            if (door1 > door2)
            {
                score3 += 3;
            }
            else if (door2 > door1)
            {
                score2 += 3;
            }
            else if (door1 == door2)
            {
                score3++;
                score2++;
            }
        }
    }
    printf("%d %d %d\n",score1,got1,lost1);
    printf("%d %d %d\n",score2,got2,lost2);
    printf("%d %d %d\n",score3,got3,lost3);
}
