#include <iostream>
using namespace std;


int main()
{
    int n = 100;
    int f = 0, b = 0, fb = 0;  
    
    for(int i = 1; i <= n; i++){
        
        if( i % 3 == 0 && i % 5 == 0) {
         cout << i <<":FizzBuzz ";
         fb ++;
        }
        else if( i % 3 == 0) {
         cout << i << ":Fizz ";
         f++;
        }
        else if(i % 5 == 0) {
         cout << i << ":Buzz ";
         b++;
        }
        else
        cout << i << " ";
    }
    
    cout << endl;
    
    cout << "Fizz : " << f << endl;
    cout << "Buzz : " << b << endl;
    cout << "FizzBuzz : " << fb << endl;
    
    return 0;
}