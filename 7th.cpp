#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Give me the radius of the cirlce: ";
    double radius;
    cin >> radius;
    const double pi = 3.14159;
    double area = pi * pow(radius, 2);
    cout << "the area of the circle is: " << area << endl;

    return 0;
}