#include <stdio.h>
FILE *fp;
int main()
{
    int arr[16];
    fp = fopen("testInput.txt", "r");
    for(int i = 0; i<16; i++)
    {
        fscanf(fp,"%d",&arr[i]);
        if(arr[i] < 500)
        {
            printf("Light User: %d\n", arr[i]);
        }
        else if(arr[i]>=500 && arr[i] < 1000)
        {
            printf("Regular User: %d\n", arr[i]);
        }
        else
        {
            printf("Heavy User: %d\n", arr[i]);
        }
    }

    fclose(fp);
    return 0;
}