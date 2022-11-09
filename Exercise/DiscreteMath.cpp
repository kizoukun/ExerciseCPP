#include <iostream>
using namespace std;
int gcd(int a, int b) { 
    int x = a;
    int y = b;
    int result;
    if(y < 0) {
        cout << "B must be positive number" << endl;
        return 0;
    }
    while(y != 0) {
        result = x % y;
        x = y;
        y = result;
    }
    return x;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main()
{
    cout << gcd(287, 91) << " is gcd(287,91)" << endl;
    cout << lcm(60, 54) << " is lcm(60,54)" << endl;
    return 0;
}

