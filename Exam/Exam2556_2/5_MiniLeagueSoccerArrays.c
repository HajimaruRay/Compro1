#include <stdio.h>

int main()
{
    int Score[3], Got[3], Lose[3];
    int Home, Arrest, GoalH, GoalA;

    for(int i = 0;i < 3;i++)
    {
        Score[i] = 0;
        Got[i] = 0;
        Lose[i] = 0;
    }
    
    for (int i = 0;i < 6;i++)
    {
        scanf("%d%d%d%d",&Home, &Arrest, &GoalH, &GoalA);

        Got[Home-1] += GoalH;
        Lose[Home-1] += GoalA;
        Got[Arrest-1] += GoalA;
        Lose[Arrest-1] += GoalH;
        
        if (GoalH > GoalA)
        {
            Score[Home-1]+=3;
        }
        else if (GoalH == GoalA)
        {
            Score[Home-1]++;
            Score[Arrest-1]++;
        }
        else if (GoalH < GoalA)
        {
            Score[Arrest-1]+=3;
        }
    }

    for (int i = 0;i < 3;i++)
    {
        printf("%d %d %d\n",Score[i], Got[i], Lose[i]);
    }
}