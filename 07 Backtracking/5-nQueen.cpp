#include <iostream>
using namespace std;

bool canPlace(int board[][20], int n, int x, int y)
{
    //column
    for (int k = 0; k < x; k++)
    {
        if (board[k][y] == 1)
            return false;
    }
    //left diagonal
    int i = x;
    int j = y;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i--, j--;
    }
    //right diagonal
    i = x;
    j = y;
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
            return false;
        i--, j++;
    }
    return false;
}

void printBoard(int n, int board[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool solveNqueen(int n, int board[][20], int i)
{
    //base case
    if (i == n)
    {
        //print board
        printBoard(n, board);
        return;
    }
    //recursive case,placing queen at every row
    //checking for cols
    for (int j = 0; j < n; j++)
    {
        //checking if position is safe or not
        if (canPlace(board, n, i, j))
        {
            //place queen
            board[i][j] = 1;
            //recursive call
            bool success = solveNqueen(n, board, i + 1);

            if (success)
            {
                return true;
            }
            //remove queen
            board[i][j] = 0;
        }
    }
    return false; //no solution
}

int main()
{
    int board[20][20] = {0};
    int n;
    cin >> n;
    solveNqueen(n, board, 0);
    return 0;
}