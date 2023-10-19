#include <stdio.h>

int arr[2][1000000], same[2][1000000];

void main()
{
    int most_number = 0, most_group = 0, count = 0, count2 = 0, count_most = 0, count_arr = 0;
    // set all number in array to 0 for checking in future
    for (int i = 0; i < 1000000; i++)
    {
        arr[0][i] = 0;
        arr[1][i] = 0;
        same[0][i] = 0;
    }

    // Input
    for (int i = 0;; i++)
    {
        scanf("%d", &arr[0][i]);

        // break when number is equal or under 0
        if (arr[0][i] <= 0)
        {
            break;
        }
        // if it not equal or under 0 just counting how many number input
        else
        {
            count++;
        }

        // Counting same number
        for (int j = 0; j < 1000000; j++)
        {
            // if number != number before && number before array not 0 replace number in before number
            // And set frequency to 1 and count for loop most number check
            if (arr[0][i] != same[0][j] && same[0][j] == 0)
            {
                same[0][j] = arr[0][i];
                same[1][j] = 1;
                count2++;
                break;
            }
            // if number is the same as before number add frequency 1 point
            else if (arr[0][i] == same[0][j])
            {
                same[1][j]++;
                break;
            }
        }
    }

    // Count most for know what number is the most same
    for (int i = 0; i < count2; i++)
    {
        // if most group < same replace same in most and set i to 0
        if (most_group < same[1][i])
        {
            most_group = same[1][i];
            i = 0;
        }
        // count how many number have the same frequency
        if (same[1][i] == most_group)
        {
            count_most++;
        }
    }

    // Count arr for loop print
    for (int i = 0; i < count2; i++)
    {
        // if frequency in number is the same of most group replace number in arr for print and counting how many times you want to print
        if (same[1][i] == most_group)
        {
            arr[1][count_arr] = same[0][i];
            count_arr++;
        }
    }

    // Print
    // print counting
    printf("%d\n", count);
    // loop print all the same frequency number
    for (int i = 0; i < count_arr; i++)
    {
        printf("%d ", arr[1][i]);
    }
}
