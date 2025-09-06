

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 99;
    int *pNumber = &number;
    printf("Values of number variable: %d\n", number);
    printf("Address of number variable: %p\n", (void *) &number);

    printf("Values of *pNumber variable: %d\n", *pNumber);
    printf("Addres referenced by *pNumber variable: %p\n", pNumber);
    printf("Address of pNumber variable: %p\n", (void *) &pNumber);
    printf("Size of pNumber %lu bytes\n", sizeof(pNumber));
    

    return 0;
}
