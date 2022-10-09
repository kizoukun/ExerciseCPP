#include <iostream>
using namespace std;
int main()
{
  cout << "Yudhistira Fauzy Achmadarel - ID 001202200081" << endl;
  long myNumber;
  cin >> myNumber;
  cout << sizeof(myNumber) << endl;
  cout << 0xFFFF << endl;
  if (myNumber % 2 != 0) {
    cout << myNumber << " is an odd value" << endl;
  } else {
    cout << myNumber << " is an even value" << endl;
  }
  return 0;
}
