// Create a program that will find all the prime numbers from 1 - 100
// The main idea is to use array to find primes, any method to find primes can be used

#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE  100

int main(int argc, char const *argv[])
{

    int primeNumbers[ARRAY_SIZE + 1];

    for (int i = 0; i <= ARRAY_SIZE; i++)
    {
        primeNumbers[i] = 1;
    }

    primeNumbers[0] = 0;
    primeNumbers[1] = 0;


    for (int i = 2; i <= ARRAY_SIZE; i++)
    {
        if (primeNumbers[i])
        {
            int limite = (int) sqrt((double)i);
            for (int j = 2; j <= limite; j++)
            { 
                if (i %  j == 0)
                {
                    primeNumbers[i] = 0;
                    break;
                }
                
            }
 
        }
        
    }

    for (int i = 2; i <= ARRAY_SIZE; i++)
    {
        if (primeNumbers[i])
        {
            printf("Prime number %i\n",i);
        }
    
       
    }
    

    return 0;
}
