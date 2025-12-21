#include <stdio.h>

FILE *fb;

int main()
{
    fb = fopen("dna_input.txt", "r");

    int size = 10;
    float suspect[size];

    int sizeR, sizeC = 10;

    printf("Reading the 10 gene chromosomes of the suspect \n");

    for(int i = 0; i < size; i++)
    {
        fscanf(fb, "%f", &suspect[i]);
    }

    printf("Reading the number of criminals \n");
    fscanf(fb, "%d", &sizeR);

    float criminals[sizeR][sizeC];

    for(int i = 0; i<sizeR; i++)
    {
        printf("Read the 10 gene chromosomes of %dth criminal \n", i+1);
        for(int j = 0; j<sizeC; j++)
        {
            fscanf(fb, "%f", &criminals[i][j]);
        }
    }

    for(int i = 0; i<sizeR; i++)
    {
        int match = 1;
        for(int j = 0; j <sizeC; j++)
        {
            printf("%.1f | ", suspect[j]);
        }

        printf("\n");
        for(int j = 0; j<sizeC; j++)
        {
            printf("%.1f | ", criminals[i][j]);
        }
        printf("\n");

        for(int j = 0; j<sizeC; j++)
        {
            if(suspect[j] != criminals[i][j])
            {
                match = 0;
            }
        }
        if(match)
        {
            printf("The %dth criminal matches! \n", i + 1);
        }
        else
        {
            printf("The %dth criminal doesn't matches \n", i + 1);
        }
    }
    fclose(fb);
    return 0;
}