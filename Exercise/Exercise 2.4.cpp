#include <iostream>
using namespace std;
int main()
{
    cout << "Yudhistira Fauzy Achmadarel - ID 001202200081" << endl;
    cout << "Calculate the Radius using CIN." << endl;

    double radius1, radius2, area1, area2;
    cout << "Please gives 2 input of the radius to be calculated:" << endl;
    cin >> radius1 >> radius2;

    area1 = radius1 * radius1 * 3.14159;
    area2 = radius2 * radius2 * 3.14159;

    cout << "The area of 1) " << radius1 << " = " << area1 << endl;
    cout << "The area of 2) " << radius2 << " = " << area2 << endl;
    return 0;
}
