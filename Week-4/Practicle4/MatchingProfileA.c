#include <stdio.h>
int main()
{
    const int size = 10;
    float check[10]; 
    float criminal[10]; 
    printf("Enter the 10 chromosomes of the suspect separated by spaces: \n");
    for (int i = 0; i < size; i++){
        scanf(" %f", &check[i]);
    }
    printf("Enter the 10 chromosomes of the criminal separated by spaces: \n");
    for (int i = 0; i < size; i++){
        scanf(" %f", &criminal[i]);
    }

    int match = 1;
    for (int i = 0; i < size; i++){
        if (check[i] != criminal[i]){
            match = 0;
            break;
        }
    }
    if (match) {
        printf("The profiles match.\n");
    } else {
        printf("The profiles do not match.\n");
    }
    return 0;
}