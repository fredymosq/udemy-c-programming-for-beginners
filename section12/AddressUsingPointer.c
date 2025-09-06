

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *pAddresNumber = NULL;
    int number = 12;

    pAddresNumber = &number;

    for (int i = 0; i < 1024; i++)
    {
        printf("Addres of pointer is %p\n", pAddresNumber);
        printf("Value of pointer is %i\n", *pAddresNumber);


        pAddresNumber++;
    }
    

    return 0;
}
