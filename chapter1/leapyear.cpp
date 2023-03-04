#include <iostream>
using namespace std;

int main()
{
    int y;
    bool result;

    cout << "Year : ";
    cin >> y;

    result = (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));

    cout.setf(cout.boolalpha);
    cout << result << endl;

    return 0;
}
