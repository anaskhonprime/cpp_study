
/* The function calculates the average, maximum, and sum of the values in the array A,
and updates the values of the avg, max, and sum variables through the pointers: */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

double get_stat(double A[], double *avg, double *max, double *sum);

int main()
{

    double A[] = {1.0, 1.3, 2.3, 5.6, 9.8, 10.0, 15.2};
    double avg, max, sum;

    double max_val = get_stat(A, &avg, &max, &sum);

    cout << "Average: " << avg << endl;
    cout << "Maximum: " << max << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}

double get_stat(double A[], double *avg, double *max, double *sum)
{

    double max_value = A[0];
    double sum_value = 0;

    for (int i = 0; i < 7; i++)
    {
        sum_value += A[i];

        if (A[i] > max_value)
        {
            A[i] = max_value;
        }
    }

    *avg = sum_value / 5;
    *max = max_value;
    *sum = sum_value;

    return max_value;
}