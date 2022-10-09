#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    if(number1 < number2) {
        int temporary = number1;
        number1 = number2;
        number2 = temporary;
    }
    cout << "What is " << number1 << " - " << number2 << " ?" << endl;
    int answer;
    cin >> answer;
    if((number1-number2)==answer) {
        cout << "Correct answer " << endl;
    } else {
        cout << "Whoops!" << endl;
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