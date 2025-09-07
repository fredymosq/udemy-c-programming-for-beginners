

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *pNumber = (int *) malloc(25 * sizeof(int));

    if (!pNumber)
    {
        printf("No memory allocated\n");
    }
    
    
    printf("%lu", sizeof(int));
    return 0;
}
