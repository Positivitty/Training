#include <iostream>
#include <string>
using namespace std;


int main() {
    cout <<"Give me a temp in F you want converted to Celsius:";
    double F_heit;
    cin >> F_heit;
    double C_heit = (F_heit - 32) * .556;
    cout << "Your temp in celsius is: " << C_heit << endl;

    return 0;
}