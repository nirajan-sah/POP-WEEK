#include <stdio.h>

int main()
{
    float foodExpenses, leisureExpenses, clothesExpenses, travel;
    const int accommodation = 500;
    printf("Enter the food expenses: ");
    scanf("%f", &foodExpenses);
    printf("Enter the leisure expenses: ");
    scanf("%f", &leisureExpenses);
    printf("Enter the clothes expenses: ");
    scanf("%f", &clothesExpenses);
    printf("Enter the travel expenses: ");
    scanf("%f", &travel);
    float totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodation + travel;

    printf("The total expenditure this month was $ %.2f\n\n", totalSpent);
    return 0;
}