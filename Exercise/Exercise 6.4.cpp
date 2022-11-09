#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    int a = 1;
    int b = 1;
    int y = 5 + a++;
    int z = 5 + ++b;
    cout << a << ' ' << b << endl;
    cout << y << " " << z << endl;
    int i = 0;
    bool even = false;
    cout << (even ? "true" : "false") << endl;
    do 
    {
        cout << (i + 1) << ". Hello world!" << endl;
        i++;
    } while(i < 10);
    i = 0;
    cout << "no 9" << endl;
    while(i < 10) {
        cout << (i + 1) << ". Hello world!" << endl;
        i++;
    }
    int sum = 0;
    int item = 0;
    do {
        item++;
        sum += item;
        if(sum > 4) break;
    } while(item < 5);
    int test = 0;
    while(test++ < 10) {
        cout << test << ". Welcome to c++" <<endl;
    }
    cout << "No 11" << endl;
    test = 0;
    do {
        cout << test << ". Welcome to c++" <<endl;
    } while(++test < 10);
    test = 0;
    do {
    } while(test++ < 9);
    cout << test << endl;
    test = 0;
    do {
        cout << test << ". Welcome to c++" <<endl;
        test++;
    } while(test < 10);




    cout << sum << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}