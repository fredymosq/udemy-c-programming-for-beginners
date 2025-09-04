// Write a C program that return the length of a string
// Write a function that concatenate two strings
// Compare two string if are equals or not
// Don't use default helper function

#include <stdio.h>

int stringLength(char string[]);
void concatTwoStrings(char string1[], char string2[], char stringConcatenated[]);
int compareString(char string1[], char string2[]);

int main(int argc, char const *argv[])
{
    char myName[] = "John Doe";
    char myBornCity[] = "Medellin - Colombia";

    int strSize = stringLength(myName);

    printf("String size of %s is %i\n", myName, strSize);

    int size = stringLength(myName) + stringLength(myBornCity);
    char myNameAndBornCity[size];
    concatTwoStrings(myName, myBornCity, myNameAndBornCity);

    printf("My concatented string is %s\n", myNameAndBornCity);

    char myOtherName[] = "john Doe";

    if (compareString(myName, myOtherName))
    {
        printf("Strings %s and %s are equals", myName, myOtherName);
    }
    else
    {
         printf("Strings %s and %s are NOT equals", myName, myOtherName);
    }
    
    

    return 0;
}


// char myName[] = "John Doe"; char myBornCity[] = "Medellin - Colombia"

int stringLength(char string[]){

    int count = 0;

    while (string[count] != '\0')
    {
        count++;
    }

    return count;
    
}

void concatTwoStrings(char string1[], char string2[], char stringConcatenated[]){

    int lengthString1 = stringLength(string1);
    int lengthString2 = stringLength(string2);
    int count = 0;
    for (int  i = 0; i < lengthString1; i++)
    {
       stringConcatenated[count++] = string1[i];
    }

    
    for (int  i = 0; i < lengthString2; i++)
    {
       stringConcatenated[count++] = string2[i];
    }
    
}

int compareString(char string1[], char string2[]){

    int lengthString1 = stringLength(string1);
    int lengthString2 = stringLength(string2);

    if (lengthString1 == lengthString2)
    {
       for (int  i = 0; i < lengthString1; i++)
       {
        if (string1[i] != string2[i])
        {
            return 0;
        }
        
       }

       return 1;
       
    }

    return 0;
    
}