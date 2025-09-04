// Write a program that displays a string in reverse order
// should read input from the keyboard
// need to use the strlen and string function
// implemente string array sorting using bubble sort algorithm


#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENG 100

void reverseString(char string1[], char string2[]);

int main(int argc, char const *argv[])
{

    char stringEntered[MAX_STRING_LENG];
    char stringReversed[MAX_STRING_LENG];

    printf("Please enter a string to be reversed (MAX STRING LENGTH %d): ", MAX_STRING_LENG);
    scanf("%[^\n]%*c", stringEntered);

    reverseString(stringEntered, stringReversed);

    printf("String entered is: %s\nString reversed is: %s\n", stringEntered, stringReversed);
    

    return 0;
}

void reverseString(char string1[], char string2[]){
    int count = 0;
    for (int i = strlen(string1) - 1 ; i >= 0 ; i--)
    {
        string2[count] = string1[i];
        count++;
    }
}




