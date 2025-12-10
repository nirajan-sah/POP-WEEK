#include <stdio.h>

int main()
{
    int num[100], n = 0, largest = 0, count = 0;
    while (1)
    {
        printf("Enter the value of num %d: ", n + 1);
        scanf("%d", &num[n]);
        if(num[n]>largest)
        {
            largest = num[n];
        }
        if(num[n] == 0)
        {
            break;
        }
        n++;
        
    }

    for(int i = 0; i<n; i++)
    {
        if(num[i] == largest) 
        {
            count++;
        }
    }
    
    printf("The largest number is %d and the occurance of that number is %d ", largest, count);
    return 0;
}