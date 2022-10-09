#include <iostream>
#include <ctime>
using namespace std;

int main() {

    char mychar1 = 'a';
    int myint1 = '1';
    int myint2 = '2';
    cout << "My char is " << mychar1 << endl;
    cout << "Addition of int as char is " << myint1+myint2 << endl;
    cout << myint1+myint2 << " is the ASCII code for character: "
    << static_cast<char>(myint1 + myint2) << endl;

    

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}