#include <stdio.h>
#include <string.h>
int main()
{
char sentence[100];
int i, len, vowels = 0, consonants = 0;
printf("Enter a sentence: ");
scanf("%s", sentence);
len = strlen(sentence);
for (i = 0; i < len; i++)
{
if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U' || sentence[i] == 'a' || sentence[i]
== 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
{
vowels++;
}
else if ((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')) {
consonants++;
}
}
printf("\nThe number of vowels present in your sentence is: %d", vowels);
printf("\nThe number of consonants present in your sentence is: %d", consonants);
return 0;
}
