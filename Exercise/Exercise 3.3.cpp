#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Please enter your birthyear: " << endl;
    int year;
    cin >> year;

    int age = 2022 - year;
    if (age >= 55) {
        cout << "You are " << age << " and eligible to open a Gold membership e-banking acc." << endl;
    } else if (age >= 25) {
        cout << "You are " << age << " and eligible to open a Silver membership e-banking acc." << endl;
    } else if (age >= 18) {
        cout << "You are " << age << " and eligible to open a Normal membership e-banking acc." << endl;
    } else {
        cout << "You are " << age << " and NOT eligible to open an e-banking acc." << endl;
    }


    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}