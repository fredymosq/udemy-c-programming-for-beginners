// Calculate the length of a string using pointer

#include <stdio.h>

int lengthString(char *string);

int main(int argc, char const *argv[])
{
    char myString[] = "Hola desde C, estoy usando pointers";
    int length = lengthString(myString);
    printf("The leng of string is %i", length);

    return 0;
}

int lengthString(char *string){
    int length = 0;
    while (*string++ != '\0')
    {
       length++;
    }

    return length;
    
}
