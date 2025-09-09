// Write a program that converts al characters of a file to uppercas
// write te results to a temporary file
// then rename de temporary file to the original file
// and remove the temporary file

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define FILE_NAME  "myFile.txt"
#define TEMP_FILE  "tempFile.txt"

int main(int argc, char const *argv[])
{
    FILE *pFile;
    FILE *pTempFile;
    char character;

    pFile = fopen(FILE_NAME, "r");
    pTempFile = fopen(TEMP_FILE, "w");

    if (pFile == NULL)
    {
        printf("Can't read the file");
        
        return -1;
    }

    while ((character = fgetc(pFile)) != EOF)
    {
        char charToUpper = character;

        if (charToUpper != '\n')
        {
            charToUpper = toupper(charToUpper);
        }

        fputc(charToUpper, pTempFile);
    }

    remove(FILE_NAME);
    rename(TEMP_FILE, FILE_NAME);
    
    fclose(pFile);
    fclose(pTempFile);

    pFile = NULL;
    pTempFile = NULL;
    
    return 0;
}
