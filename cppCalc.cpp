#include<iostream>
#include<string>
using namespace std;



int addnumbers(int a, int b){
    return a+b;
}

int sub_numbers(int a, int b){
    return a-b;
}

int mult_numbers(int a, int b){
    return a*b;
}

int div_numbers(int a, int b) {
    if (b== 0 || a == 0){
        cout << "Division by zero is not allowed." << endl;
        return 0; // or handle it as needed
    }
    return a / b;
}
void menu(){
    cout << "Welcome to the C++ Calculator!" << endl;
    cout << "Please choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

}
int main () {
    int selection;
    

    cout << "Select an operation(1-5): ";
    cin>> selection;

    while (selection != 5){
        int num_1, num_2;
        cout << "enter first number:"<<endl;
        cin >> num_1;
        cout << "enter second number:"<<endl;
        cin >> num_2;

        if (selection == 1) {
            cout << "Result of addition: " << addnumbers(num_1, num_2) << endl;
        } else if (selection == 2) {
            cout << "Result of subtraction: " << sub_numbers(num_1, num_2) << endl;
        } else if (selection == 3) {
            cout << "Result of multiplication: " << mult_numbers(num_1, num_2) << endl;
        } else if (selection == 4) {
            cout << "Result of division: " << div_numbers(num_1, num_2) << endl;
        } else {
            cout << "Invalid selection. Please try again." << endl;
        }
menu();
    }