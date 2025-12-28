#include <stdio.h>

int main()
{
    float foodExpenses = 700.0;
    float leisureExpenses = 800.0;
    float clothesExpenses = 1800.0;
    float accommodation = 2000.0;
    float travel = 500.0;
    
    float totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodation + travel;

    printf("The total expenditure this month was $ %.2f\n\n", totalSpent);
    return 0;
}