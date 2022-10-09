#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Are you a PresUnivers? Type Y for Yes, N for no" << endl;
    char presuniv;
    cin >> presuniv;

    if(presuniv == 'Y' || presuniv == 'y') {
        cout << "Please input your student ID:" << endl;
        int studentId;
        cin >> studentId;
        if(studentId % 2 == 0) {
            cout << "Your id is an even number" << endl;
        } else {
            cout << "Your id is an odd number" << endl;
        }
    } else {
        cout << "Comeback when you are." << endl;
    }

    // ---------------------------------------

    // cout << "Are you sick?" << endl;
    // char sick;
    // cin >> sick;
    // if(sick == 'y' || sick == 'Y') {
    //     cout << "Do you need medicine? Y for yes" << endl;
    //     char medicine;
    //     cin >> medicine;
    //     if(medicine == 'y' || medicine == 'Y') {
    //         cout << "Please take your medicine to student medication" << endl;
    //     } else {
    //         cout << "Glad you don't need medicine. Please take a rest for your health" << endl;
    //     }
    // } else {
    //     cout << "Thats good you are not sick :)" << endl;
    // }
    
    // ---------------------------------------

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}