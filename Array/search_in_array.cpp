/* search that takes three arguments: a pointer to the array A,
the size of the array n, and the value to search for x */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int *search(int *A, int n, int x);

int main()
{

    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 3;

    int *ptr = search(A, n, x);

    if (ptr != nullptr)
    {
        cout << "Found " << x << " at address " << ptr << endl;
    }
    else
    {
        cout << "Did not find " << x << endl;
    }

    return 0;
}

int *search(int *A, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (*(A + i) == x)
        {
            return (A + i);
        }
    }
    return nullptr; // If not found, return a null pointer
}