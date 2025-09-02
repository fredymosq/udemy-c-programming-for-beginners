// Create a program that will find all the prime numbers from 1 - 100
// The main idea is to use array to find primes, any method to find primes can be used

#include <stdio.h>

int ARRAY_SIZE  = 100;

int main(int argc, char const *argv[])
{
    int numbers[ARRAY_SIZE];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;

    int primeNumbers[ARRAY_SIZE];
    primeNumbers[0] = 1;
    primeNumbers[1] = 1;
    primeNumbers[2] = 1;


    for (int i = 3; i <= ARRAY_SIZE; i++)
    {
        numbers[i] = i;
    }

    for (int i = 3; i <= ARRAY_SIZE; i++)
    {
        primeNumbers[i] = 1;
    }

    for (int i = 3; i <= ARRAY_SIZE; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            for (int j = 1; j < i; j++)
            {
                if (numbers[i] % numbers[j] == 0)
                {
                    printf(">> %i, %i = %i\n",numbers[i],numbers[j], numbers[i]  % numbers[j]);
                    primeNumbers[i] = 0;
                    break;
                }
                
            }
 
        }
        else
        {
            primeNumbers[i+1] = 0;
        }
        
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (primeNumbers[i] == 1)
        {
            printf("Prime number %i, %i\n", i+1, primeNumbers[i]);
        }
        
 
        
       
    }
    

    return 0;
}
