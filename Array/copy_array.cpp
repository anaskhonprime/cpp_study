
/* copy array A[] to array B[] using function */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void copy(int *A, int *B, int n);

int main()
{

    int A[5] = {1, 2, 3, 4, 5};
    int B[5];
    int n = 5;

    copy(A, B, n);

    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }

    return 0;
}

void copy(int *A, int *B, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(B + i) = *(A + i);
    }
}