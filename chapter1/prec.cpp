#include <iostream>
using namespace std;

int main()
{

    int x = 10, y = 3, z = 2;

    int result1 = x += y -= 2;  // result is 11

    int result2 = x *= y + 2; // result is 50, + is more higher += so, 10 * (3+2) = 50

    int result3 = z = ++x + ++y; // result is 15, z = 10+1 + 3+1 = 15

    cout << result1 << endl;

    return 0;
}
