/* can check if the first character of a string is uppercase by checking its ASCII value.
If it is within the range of uppercase letters (65-90), then it is uppercase.
If it is lowercase (97-122), you can convert it to uppercase by subtracting 32 from its ASCII value. */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{

    string s;

    cout << "Enter String : ";

    // getline() function to read input from the user until a newline character is encountered.
    getline(cin, s);

    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] -= 32; // convert to uppercase
    }

    cout << "String : " << s << endl;

    return 0;
}