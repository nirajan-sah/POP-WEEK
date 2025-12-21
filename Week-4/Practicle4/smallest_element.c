#include <stdio.h>

int main()
{
    double nums[10], smallest;
    for(int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &nums[i]);
    }
    smallest = nums[0];
    for(int i = 1; i < 10; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    printf("The smallest number is %.2lf\n", smallest);
    return 0;
}