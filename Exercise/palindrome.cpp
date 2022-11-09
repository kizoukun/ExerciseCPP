#include <iostream>
#include <string>
using namespace std;

int main() {
    string strInput;
    cout << "Please select your words: " << endl;
    cin >> strInput;
    int stringLength = strInput.length();
    bool isPalindrome = true;
    for(int i = 0; i < stringLength; i++) {
        if(strInput[i] != strInput[stringLength - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) {
        cout << strInput << " Is palindrome" << endl;
    } else {
        cout << strInput << " Is not palindrome" << endl;
    }
    return 0;
}