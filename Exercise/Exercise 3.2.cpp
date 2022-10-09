#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Please input your dollar value" << endl;
    double dollar;
    cin >> dollar;
    
    double rupiah = dollar * 15001;
    double euro = dollar * 1.01;

    // cout the conversion of dollar (user input) is ... (rupiah)

    cout << "The conversion of dollar " << dollar << " is Rp. " << rupiah << " and " << euro << " euro" << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}