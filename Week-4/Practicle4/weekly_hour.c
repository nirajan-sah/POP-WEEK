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
    int weeklyHours[7],index[7], sum, temp;
    for(int i = 0; i < 7; i++)
    {
        index[i] = i;
        for(int j = 0; j < 7; j++)
        {
            sum += matrix[i][j];
        }
        weeklyHours[i] = sum;

        sum = 0;
    }
    
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (weeklyHours[i] < weeklyHours[j]) {
                temp = weeklyHours[i];
                weeklyHours[i] = weeklyHours[j];
                weeklyHours[j] = temp;

                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

   
    printf("Employee\tTotal Hours\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t\t%d\n", index[i] + 1, weeklyHours[i]);
    }
    return 0;
}