#include <stdio.h>

int main()
{
    int matrix[7][7];
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            printf("Enter hours worked by employee %d on day %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int weeklyHours[7], sum;
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            sum += matrix[i][j];
        }
        weeklyHours[i] = sum;
        sum = 0;
    }
    
    int check = 0;
    for(int i = 0; i<7; i++)
    {
        if(weeklyHours[i] > check)
        {
            check = weeklyHours[i];
        }
    }
    return 0;
}