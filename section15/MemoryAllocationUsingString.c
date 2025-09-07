
//Write a program that allows user to input a text string
//the program will pring the text that was inputted
//the program will utilize dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sizeLimit = 0;
    printf("Enter the size limit of the text you want enter:");
    scanf("%i", &sizeLimit);

    char *pTextEntered = (char *) malloc((sizeLimit + 1) * sizeof(char));

    if (pTextEntered != NULL)
    {
        printf("\nEnter some text:");
        scanf(" %[^\n]%*c", pTextEntered);

        printf("\nText entered %s", pTextEntered);
    }


    free(pTextEntered);
    pTextEntered = NULL;

    return 0;
}
