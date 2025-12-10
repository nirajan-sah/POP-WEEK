#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9/5) * celsius + 32;
    printf("The conversion of %.2f degree celsius in fahrenheit is %.2f", celsius, fahrenheit);
    return 0;
}