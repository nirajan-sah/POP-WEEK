#include <stdio.h>
void rightangled();
void reverseleft();
void rightside();
void reverseright();

int main()
{
    printf("Right angled shape\n");
    rightangled();
    printf("\nReverse right angled shape\n");
    reverseleft();
    printf("\nRight side shape\n");
    rightside();
    printf("\nReverse right side shape\n");
    reverseright();
    return 0;
}

void rightangled()
{
    for(int i = 1; i<=6; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void reverseleft()
{
    for(int i = 6; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }   
}

void rightside()
{
    int k = 5*2;
    for(int i = 1; i<=6; i++)
    {
        for(int m = 1; m <= k; m++)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k-=2;
    }
}

void reverseright()
{
    int k = 0;
    for(int i = 6; i>=1; i--)
    {
        for(int m = 1; m <= k; m++)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k+=2;
    }
}