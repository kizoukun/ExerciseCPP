#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Please enter your Customer ID: " << endl;
    int CustomerID;
    cin >> CustomerID;
    if(CustomerID % 2 == 0) {
        cout << "You will work on even date" << endl;
    } else {
        cout << "You will work on odd date" << endl;
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