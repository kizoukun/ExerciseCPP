#include <iostream>
using namespace std;
int main()
{
    cout << "Yudhistira Fauzy Achmadarel - ID 001202200081" << endl;
    cout << "Calculate the Radius using CIN." << endl;

    double radius, area;
    cout << "Please input the radius to be calculated:" << endl;
    cin >> radius;

    area = radius * radius * 3.14159;

    cout << "The area of radius " << radius << " = " << area << endl;
    return 0;
}
