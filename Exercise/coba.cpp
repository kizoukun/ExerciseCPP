#include <iostream>
using namespace std;

int main()
{
    cout<< "apakah anda sd?"<< endl;
    char inputSchool;
    cin >> inputSchool;
    if (inputSchool != 'y') {
        cout<< "apakah anda smp?"<< endl;
        cin >> inputSchool;
        if (inputSchool != 'y') {
            cout<< "apakah anda sma?"<< endl;
            cin >> inputSchool;
            if (inputSchool != 'y') {
                cout << "tingkat sekolah tidak ditemukan"<<endl;
            }
        }
    }
    return 0;
}