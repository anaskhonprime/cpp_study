#include <iostream>
using namespace std;

int main()
{
    double cm, feet, inches;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    // Convert cm to feet and inches
    feet = cm / 30.48; // 1 foot = 12 * 2.54 = 30.48cm

    inches = (feet - (int)feet) * 12;

    // Output the result
    cout << cm << " cm = " << (int)feet << " feet and " << inches << " inches" << endl;

    return 0;
}