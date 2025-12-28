#include <stdio.h>
#define billamount 12;
FILE *fp;
int main()
{
    int arr[7*4], total;
    fp = fopen("bill_input.txt", "r");
    for(int i = 0; i<7*4; i++)
    {
        total = 0;
        fscanf(fp,"%d", &arr[i]);
        total = arr[i] * billamount;
        printf("Customer %d with units %d: %d\n", i+1, arr[i], total);
    }
    
    fclose(fp);
    return 0;
}