#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int gachaNumber = rand() % 100;
    int gachaNumber1 = gachaNumber / 10;
    int gachaNumber2 = gachaNumber % 10;
    cout << "Your guess number must be 2 digits: " << endl;
    int guessNumber;
    cin >> guessNumber;
    int guessNumber1 = guessNumber / 10;
    int guessNumber2 = guessNumber % 10;
    if ((guessNumber1 == gachaNumber1 && guessNumber2 == gachaNumber2) && (guessNumber == gachaNumber)) {
        cout << "Congrats! You won $10.000! Because you correctly guessed the number" << endl;
    } else if ((guessNumber2 == gachaNumber1) && (guessNumber1 == gachaNumber2)) {
        cout << "Congrats! You won $5.000! Because you correctly guessed the digits number but wrong about the gachaNumber" << endl;
    } else if ((guessNumber1 == gachaNumber1) || (guessNumber2 == gachaNumber2)) {
        cout << "Congrats! You won $3.000! Because you correctly guessed 1 number of the gacha number" << endl;
    } else {
        cout << "You won nothing because you didn't guess the number" << endl;
    }
    

    cout << "Gacha number is " << gachaNumber << endl;
    
    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}