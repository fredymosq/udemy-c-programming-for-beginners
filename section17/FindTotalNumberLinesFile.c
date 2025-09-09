// Write a program to find the total number of lines in a text file

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *pFile;
    int character;
    int counter = 0;

    pFile = fopen("myFile.txt", "r");

    if (pFile == NULL)
    {
        printf("Can't read the file");
        return -1;
    }

    while ((character = fgetc(pFile)) != EOF)
    {
        if (character == '\n')
        {
            counter++;
        }
        
    }

    counter++;

    printf("Number of lines of Read file is: %i", counter);
    
    fclose(pFile);
    pFile = NULL;
    
    return 0;
}
