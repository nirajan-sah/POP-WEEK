#include <stdio.h>

int main()
{
    float foodExpenses = 7000.0;
    float leisureExpenses = 8000.0;
    float clothesExpenses = 18000.0;
    float totalSpent;
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was $ %.2f\n\n", totalSpent);
    return 0;
}