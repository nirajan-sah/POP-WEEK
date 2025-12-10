#include <stdio.h>

int main()
{
    float monthly_saving, temp = 0;
    printf("Enter your monthly saving: ");
    scanf("%f", &monthly_saving);
    for(int i = 1; i <= 6; i++)
    {
        temp = (temp + monthly_saving) * 1.00417;
    }
    printf("%.2f", temp);
    return 0;
}