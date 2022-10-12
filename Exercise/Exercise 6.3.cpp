#include <iostream>
#include <ctime>
using namespace std;

int sum(int start, int end) {
    int sum = 0;
    for(int i=start; i <= end ;i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum from 1 to 10 is " << sum(1, 10) << endl;
    cout << "Sum from 2 to 20 is " << sum(2, 20) << endl;
    cout << "Sum from 3 to 30 is " << sum(3, 30) << endl;



    cout << "----------------------------------------------------------" << endl;
    cout << "Name: Yudhistira Fauzy Achmadarel; ID: 001202200081" << endl;
    time_t currtime = time(0);
    char *myTime = ctime(&currtime);
    cout << "Date and time" << endl;
    cout << myTime << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}

