/* To find the sum of each row and column in a 2D array arr[3][5] in C++ */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15}};

    // Calculate the sum of each row

    for (int i = 0; i < 3; i++)
    {
        int sum_row = 0;
        for (int j = 0; j < 5; j++)
        {
            sum_row += arr[i][j];
        }
        cout << "Sum of row " << sum_row << endl;
    }

    cout << endl;

    // Calculate the sum of each column
    for (int j = 0; j < 5; j++)
    {
        int sum_col = 0;
        for (int i = 0; i < 3; i++)
        {
            sum_col = arr[i][j];
        }
        cout << "Sum of column " << sum_col << endl;
    }

    return 0;
}