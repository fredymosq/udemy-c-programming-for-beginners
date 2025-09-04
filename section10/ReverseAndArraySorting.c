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

    char name[25][50];
    char temp[25];
    int numberStringsEntered = 0;

    printf("Please enter a string to be reversed (MAX STRING LENGTH %d): ", MAX_STRING_LENG);
    scanf("%[^\n]%*c", stringEntered);

    reverseString(stringEntered, stringReversed);

    printf("String entered is: %s\nString reversed is: %s\n", stringEntered, stringReversed);


    printf("\n------------------\n");
    printf("Sort of string of an array using bubble sort: \n");
    printf("Input numbers of string you want to enter: ");
    
    scanf("%d", &numberStringsEntered);

    for (int  i = 0; i < numberStringsEntered; i++)
    {
        printf(">:");
        scanf("%s", name[i]);
    }

    for (int  i = 0; i <= numberStringsEntered; i++)
    {
        for (int j = 0; j  <= numberStringsEntered - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(temp) - 1);
                strncpy(name[j + 1], temp, sizeof(temp) - 1);
            }
            
        }
        
    }

    printf("\nWords Ordered:\n");
    for (int i = 0; i <= numberStringsEntered; i++)
    {
        printf("%s\n", name[i]);
    }
    
    
    
    

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




