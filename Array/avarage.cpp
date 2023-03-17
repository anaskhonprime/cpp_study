#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{

    const int MAX = 5;
    int a[MAX];
    int avg, tmp = 0, sum = 0;

    double result;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << a[i] << " ";
    }

    for (int j = 0; j < MAX; j++)
    {
        sum += a[j];
    }

    avg = sum / MAX;

    cout << "\nAVARAGE : " << avg << endl;

    for (int k = 0; k < MAX; k++)
    {

        tmp += (pow((a[k] - avg), 2));
    }

    result = pow(tmp / MAX, 0.5);

    cout << "\nRESULT : " << result << endl;

    return 0;
}