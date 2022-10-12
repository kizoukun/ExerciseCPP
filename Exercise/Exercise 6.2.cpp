#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int end, start;
    cout << "Please input your Initialize number" << endl;
    cin >> start;
    cout << "Give a number you want to sum" << endl;
    cin >> end;
    int sum = 0;
    for(int i=start; i <= end ;i++) {
        cout << i << " + " << sum;
        sum += i;
        cout << " = " << sum << endl;
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