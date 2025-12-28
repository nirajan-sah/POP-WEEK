#include <stdio.h>
int main()
{
    const int size = 10;
    
    int list = 3, match, found, num;

    float check[3][10]; 
    float criminal[10]; 
    printf("Enter the 10 chromosomes of the suspect separated by spaces: \n");
    for (int i = 0; i < list; i++){
        printf("Suspect %d: ", i + 1);
        for(int j = 0; j < size; j++)
        {
        scanf(" %f", &check[i][j]);
        }
    }
    printf("Enter the 10 chromosomes of the criminal separated by spaces: \n");
    for (int i = 0; i < size; i++){
        scanf(" %f", &criminal[i]);
    }

    for (int i = 0; i < list; i++){
        match = 1;
        for(int j = 0; j < size; j++){
            if (check[i][j] != criminal[j]){
                match = 0;
                break;
            }
        }
        if (match){
            num = i + 1;
            found = 1;
            break;
        }
    }
    if (found) {
        printf("The profiles match. Suspect number: %d\n", num);
    } else {
        printf("The profiles do not match.\n");
    }
    return 0;
}