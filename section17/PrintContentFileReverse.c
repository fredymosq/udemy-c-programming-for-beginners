// write a program that will print the content
// of a program in reverse order
// use the fseek function to seek to the end of the file
// use the ftell function to get the position of the file pointer
// displays as output the file in reverse order

#include <stdio.h>


#define FILE_NAME "myFile.txt"

int main(int argc, char const *argv[])
{
    FILE *pFile = NULL;
    int count = 0;
    int i = 0;

    pFile = fopen(FILE_NAME, "r");

    if (pFile == NULL)
    {
        printf("Can't raed the file %s", FILE_NAME);

        return -1;
    }

    fseek(pFile, 0, SEEK_END);

    // get the postion of the file pointer
    count = ftell(pFile);

    while (i < count)
    {
        i++;
        fseek(pFile, -i, SEEK_END);
        printf("%c", fgetc(pFile));
    }
    
    printf("\n");

    fclose(pFile);
    pFile = NULL;
    
    return 0;
}
