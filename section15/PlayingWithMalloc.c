

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *pString = NULL;

    //Initial memory allocation

    pString = (char *) malloc( 15 * (sizeof(char)));
    strcpy(pString, "John Doe");

    //Reallocating memory

    pString = (char *) realloc(pString, 25);
    strcat(pString, "From Medellin");

    printf("String = %s, memory address: %p", pString, pString);

    free(pString);
    
    return 0;
}
