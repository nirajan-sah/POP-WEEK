#include <stdio.h>
FILE *fp;
int main()
{
    int arr[16], heavyUser=0, regularUser=0, lightUser=0;
    fp = fopen("testInput.txt", "r");
    for(int i = 0; i<16; i++)
    {
        fscanf(fp,"%d",&arr[i]);
        if(arr[i] < 500)
        {
            printf("Light User: %d\n", arr[i]);
            lightUser++;
        }
        else if(arr[i]>=500 && arr[i] < 1000)
        {
            printf("Regular User: %d\n", arr[i]);
            regularUser++;
        }
        else
        {
            printf("Heavy User: %d\n", arr[i]);
            heavyUser++;
        }
    }
    printf("Number of Light Users: %d\n", lightUser);
    printf("Number of Regular Users: %d\n", regularUser);
    printf("Number of Heavy Users: %d\n", heavyUser);
    fclose(fp);
    return 0;
}