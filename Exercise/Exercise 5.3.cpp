#include <iostream>
#include <ctime>
#include <cstring> // use string for array of character
using namespace std;

int main() {

    char myname[28] = "Yudhistira Fauzy Achmadarel";
    char firstname[11];
    char fullname[28];
    strcpy(fullname, myname);
    strncpy(firstname, myname, 10);

    cout << "My First Name is " << firstname << endl;
    cout << "My full name is " << fullname << endl;

    

    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}