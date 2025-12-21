#include <stdio.h>

int main()
{
    float matrix[3][4];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }
    float columnSums[4], sum;;
    for(int j = 0; j < 4; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            sum += matrix[i][j];
        }
        columnSums[j] = sum;
        sum = 0;
    }
    for(int j = 0; j < 4; j++)
    {
        printf("Sum of column %d: %.2f\n", j, columnSums[j]);
    }
    return 0;
}