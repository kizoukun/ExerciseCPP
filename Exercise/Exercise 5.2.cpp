#include <iostream>
#include <ctime>
using namespace std;

int main() {

    char lowc;
    cin >> lowc;
    lowc = toupper(lowc);
    cout << "Uppercase for your character is " << lowc << endl;

    cout << "Input an upperchase character" << endl;
    

    

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}