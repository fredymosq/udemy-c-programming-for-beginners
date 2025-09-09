
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE * pFile;
    int character;

    pFile = fopen("myFile.txt", "r");

    if (pFile == NULL)
    {
        printf("Error reading file");
        
        return -1;
    }
    

    while ((character = fgetc(pFile)) != EOF)
    {
        printf("%c", character);
    }

    fclose(pFile);
    pFile = NULL;

    return 0;

}
