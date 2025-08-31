/*
   this program will generate a random number from 0 -20
   you will then ask the user to guess it
   the program will indicate to the user if each guess is too high or too low
   the player wins the game if they can guess the number within five tries 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>


 int main(int argc, char const *argv[])
 {
  //stablish the seed to generate random number
  srand(time(NULL));
  int numberToGuess = rand() % 20 + 1;
  int numberEntered;

  printf("Enter a number from 0 to 20:\n");
  scanf("%i", &numberEntered);

  for (int i = 5; i >= 0 ; i--)
  {
    if (numberEntered == numberToGuess && i >= 0)
    {
      printf("Congratulations, You have guessed the number!!!: %i\n", numberToGuess);
      break;
    }
    else
    {
      if (i == 0)
      {
        printf("You consumed all the opportunities");
        break;
      }

      if (numberEntered > numberToGuess)
      {
        printf("Number entered too high\n");
      }
      else
      {
        printf("Number entered too low\n");
      }
      
      printf("Number entered %i is not the guess number you have %i opportunities left, Try again! \n", numberEntered, i);
      printf("Enter a number from 0 to 20\n");
      scanf("%i", &numberEntered);
    }
    
    
  }
  
  return 0;
 }
 