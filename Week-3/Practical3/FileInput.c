#include <stdio.h>

FILE *fp;

int main()
{
    char firstWord[20], secondWord[20];
    int num;
    printf("Reads two words and a integer from file\n");
    fp = fopen("inputFile.txt", "r");
    fscanf(fp,"%s %s %d", firstWord, secondWord, &num);
    printf("Displays back what has been read from input file:\n");
    printf("%s %s \n%d", firstWord, secondWord, num);
    fclose(fp);
    return 0;
}