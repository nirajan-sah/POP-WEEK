#include <stdio.h>

int main()
{
    int current = 312032486;
    int new = ((365 * 24 * 60 * 60)/7) - ((365 * 24 * 60 * 60)/13) + ((365 * 24 * 60 * 60)/45);
    printf("The estimated new population after five years is %d", (new * 5) + current);
    return 0;
}