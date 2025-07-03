#include<iostream>
#include<string>
using namespace std;


int main () {

double age = 26;
string my_name = "noah";
int fav_num = 8;
char fav_letter = 'Z';
string user_input;
cout << "do you like pizza? (yes?no)";
cin>> user_input;
cout << "your name is"<<my_name<<endl;
cout <<"your age is "<<age <<endl;
cout <<"your favorite number is "<<fav_num<<endl;
cout <<"your favorite letter is "<<fav_letter<<endl;
cout << "your answer for if you like pizza is:"<<user_input<<endl;

return 0;
}