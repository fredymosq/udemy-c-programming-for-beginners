// Create c program to play Tic Tac toe Multiplayer
// Display board to console
// let the user choose what player he wants
// Player 1 = 1 and Player 2 = 2

#include <stdio.h>
#include <stdlib.h>
#include "TicTacToeMultiplayer.h"

#define ROW_BOARD 3
#define COLUM_BOARD 3

int main(int argc, char const *argv[])
{
    char board[ROW_BOARD][COLUM_BOARD] = {

        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    int player = 1;
    int gameStatus = 0;
    int boxSelected = 0;
    char selection;
    int counterSelection = 0;

    printf("\nWelcome to amazing Tic tac toe game!\n\n");
    displayBoard(board);

    while (gameStatus != -1)
    {

    player = player % 2 ? 1 : 2;
    selection = player == 1 ? 'X' : 'O';

    printf("\nPlayer %i enter number for the box: ", player);
    scanf("%i", &boxSelected);

    if (boxSelected < 1 || boxSelected > 9)
    {
        printf("You have selected the invalid box, Try again!");
        player--;
        getchar();
        printf("\nPlayer %i enter number for the box: ", player);
        scanf("%i", &boxSelected);
    }


    clearBoardScreen();
    establishSelection(boxSelected, board, selection);
    displayBoard(board);
    gameStatus = checkStatusGame(board);
    counterSelection++;

    if (gameStatus == 1)
    {
        printf("\n************************************\n");
        printf("\n* Congratulations Player %i, You Won! *\n", player);
        printf("\n************************************\n");
        break;
    }

    else if (gameStatus == 0 && counterSelection == 9)
    {
        printf("\n************************************\n");
        printf("\n* It's a tie!                      *\n");
        printf("\n************************************\n");
        break;
    }
    
    
    player++;

    }


    return 0;
}

void establishSelection(int boxSelected, char board[3][3], char selection)
{
    if (boxSelected == 1)
    {
        board[0][0] = selection;
    }

    if (boxSelected == 2)
    {
        board[0][1] = selection;
    }

    if (boxSelected == 3)
    {
        board[0][2] = selection;
    }

    if (boxSelected == 4)
    {
        board[1][0] = selection;
    }

    if (boxSelected == 5)
    {
        board[1][1] = selection;
    }

    if (boxSelected == 6)
    {
        board[1][2] = selection;
    }

    if (boxSelected == 7)
    {
        board[2][0] = selection;
    }

    if (boxSelected == 8)
    {
        board[2][1] = selection;
    }

    if (boxSelected == 9)
    {
        board[2][2] = selection;
    }
}

int checkStatusGame(char board[3][3])
{
    int gameStatus = 0;

    if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
    {
        gameStatus = 1;
    }
    else if (board[1][0] == board[1][1] && board[1][0] == board[1][2])
    {
        gameStatus = 1;
    }

    else if (board[2][0] == board[2][1] && board[2][0] == board[2][2])
    {
        gameStatus = 1;
    }
    else if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
    {
        gameStatus = 1;
    }

    else if (board[0][1] == board[1][1] && board[0][1] == board[2][1])
    {
        gameStatus = 1;
    }

    else if (board[0][2] == board[1][2] && board[0][2] == board[2][2])
    {
        gameStatus = 1;
    }

    else if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        gameStatus = 1;
    }

    else if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        gameStatus = 1;
    }

    return gameStatus;
}

void displayBoard(char board[3][3])
{
    int player = 0;
    printf("\n%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---------\n");
    printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---------\n");
    printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    printf("\nPlayer 1  (X)\n");
    printf("Player 2  (O)\n");
}

void clearBoardScreen()
{
#ifdef _WIN32
    system("cls");
#elif __APPLE__ || __linux__
    system("clear");
#endif
}
