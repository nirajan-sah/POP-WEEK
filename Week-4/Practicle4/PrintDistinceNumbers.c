#include <stdio.h>

int main()
{
    int nums[10];
    int distinct[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);

        int isNew = 1;

        for (int j = 0; j < count; j++) {
            if (nums[i] == distinct[j]) {
                isNew = 0;
                break;
            }
        }

        if (isNew) {
            distinct[count] = nums[i];
            count++;
        }
    }

    printf("The number of distinct numbers is %d\n", count);
    printf("The distinct numbers are: ");

    for (int i = 0; i < count; i++) {
        printf("%d ", distinct[i]);
    }

    return 0;
}
