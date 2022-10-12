#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    
    srand(time(0));
    int number = rand() % 101;
    cout << "Guess a number between 0 to 100" << endl;

    int guess = -1;
    while (guess != number) {
        cout << "Please input your guess" << endl;
        cin >> guess;

        if(guess == number) {
            cout << "Congrats you won its " << number << endl;
        } else if (guess > number) {
            cout << "Your guess is too high" << endl;
        } else {
            cout << "Your guess is too low" << endl;
        }
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