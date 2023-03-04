
#include <iostream>
using namespace std;

int main()
{
    int input, min, sec;
    const int per = 60;

    cout << "Secund : ";
    cin >> input;

    min = input / per;
    sec = input % per;

    cout << input << "s : " << min << " min, " << sec << "sec." << endl;

    return 0;
}
