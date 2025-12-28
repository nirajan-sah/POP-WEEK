#include <stdio.h>

int Display_Sorted(int a, int b, int c) {
    int first, second, third;
    if (a <= b && a <= c) {
        first = a;
        if (b <= c) {
            second = b;
            third = c;
        } else {
            second = c;
            third = b;
        }
    } else if (b <= a && b <= c) {
        first = b;
        if (a <= c) {
            second = a;
            third = c;
        } else {
            second = c;
            third = a;
        }
    } else {
        first = c;
        if (a <= b) {
            second = a;
            third = b;
        } else {
            second = b;
            third = a;
        }
    }
    printf("Sorted order: %d %d %d\n", first, second, third);
    return 0;
}

int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    Display_Sorted(num1, num2, num3);
    return 0;
}