#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter length width and height: ";
    cin >> a >> b >> c;

    int result = a * b * c;

    cout << "Box: " << result << endl;

    return 0;
}

/* Result

Enter length width and height: 10 10 10 
Box: 1000 */