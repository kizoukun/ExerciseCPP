#include <iostream>
#include <ctime>
using namespace std;

int main() {

    cout << "Enter year: " << endl;
    int year;
    cin >> year;
    switch(year % 12) {
        case 0:
            cout << "Your zodiac is Monkey" << endl;
            break;
        case 1:
            cout << "Your zodiac is Rooster" << endl;
            break;
        case 2:
            cout << "Your zodiac is Dog" << endl;
            break;
        case 3:
            cout << "Your zodiac is Pig" << endl;
            break;
        case 4:
            cout << "Your zodiac is Rat" << endl;
            break;
        case 5:
            cout << "Your zodiac is Ox" << endl;
            break;
        case 6:
            cout << "Your zodiac is Tiger" << endl;
            break;
        case 7:
            cout << "Your zodiac is Rabbit" << endl;
            break;
        case 8:
            cout << "Your zodiac is Dragon" << endl;
            break;
        case 9:
            cout << "Your zodiac is Snake" << endl;
            break;
        case 10:
            cout << "Your zodiac is Horse" << endl;
            break;
        case 11:
            cout << "Your zodiac is Sheep" << endl;
            break;
        default:
            cout << "Your zodiac sign is unknown are you born yet?" << endl;
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