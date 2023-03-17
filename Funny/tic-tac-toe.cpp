/* tic-tac-toe 게임   */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <ctime>

void drawBoard(char board[3][3])
{

    cout << "\n";
    cout << "   1   2   3\n";
    cout << "1  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "\n  ---+---+---\n";
    cout << "2  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "\n  ---+---+---\n";
    cout << "3  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool checkWin(char board[3][3], char symbol)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    }
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;
    return false;
}

using namespace std;

int main(void)
{

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int player = 1;
    char symbol = 'x';

    while (true)
    {
        drawBoard(board);

        int row, col;
        cout << "\nPlayer " << player << ", enter row (1-3): ";
        cin >> row;
        cout << "\nPlayer " << player << ", enter column (1-3): ";
        cin >> col;

        if (board[row - 1][col - 1] != ' ')
        {
            cout << "\nThat space is already taken.\n";
            continue;
        }

        board[row - 1][col - 1] = symbol;

        if (checkWin(board, symbol))
        {
            drawBoard(board);
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (symbol == 'x')
            symbol = 'o';
        else
            symbol = 'x';

        if (player == 1)
            player = 2;
        else
            player = 1;
    }

    return 0;
}