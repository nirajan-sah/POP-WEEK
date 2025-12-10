#include <stdio.h>

FILE *fp;
int main()
{
    int arr[7*4], total;
    fp = fopen("bill_input.txt", "r");
    for(int i = 0; i<7*4; i++)
    {
        fscanf(fp,"%d", &arr[i]);
    }
    for(int i = 0; i<7*4; i++)
    {
        printf("%d\n", arr[i]);
        total += arr[i];
    }
    printf("The total is %d", total);
    fclose(fp);
    return 0;
}