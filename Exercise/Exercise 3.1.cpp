#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Please input your dollar change in decimal" << endl;
    double change;
    cin >> change;

    int remainder;
    remainder = static_cast<int>(change*100);

    int onedollar = remainder / 100;
    remainder = remainder % 100;
    cout << "You will receive " << onedollar << " of one dollar bills." << endl;
    
    int quarter = remainder / 25;
    remainder = remainder % 25;
    cout << "You will receive " << quarter << " of one quarter cents." << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}