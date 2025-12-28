#include <stdio.h>

void check_password_strength(char *password) {
    int i = 0, word_count = 0, digit_count = 0, len = 0, special_count = 0;
    for(i = 0; password[i] != '\0'; i++) 
    {
        if((password[i] >= 'A' && password[i] <= 'Z') ||
           (password[i] >= 'a' && password[i] <= 'z')) {
            word_count++;
        } 
        else if(password[i] >= '0' && password[i] <= '9'){
            digit_count++;
        }
        else{
            special_count++;
        }
        len++;   
    }
        if(len >= 8 && word_count > 0 && digit_count >= 2 && special_count == 0) {
            printf("Password is valid\n");
        } else {
            printf("Password is invalid\n");
        }
    }
int main()
{
    char password[100];
    printf("Enter the password: ");
    scanf("%s", password);

    check_password_strength(password);
    return 0;
}