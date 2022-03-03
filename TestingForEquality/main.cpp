#include <iostream>

using namespace std;

int main(){

    bool equalResult{false};
    bool notEqualResult{false}; 
    //int num1{},num2{};

    cout << boolalpha;
/* 
    cout << "Enter 2 integers seperated by a space: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1!=num2);
    cout << "Comparision result(equals): " << equalResult << endl;
    cout << "Comparision result(not equals): " << notEqualResult << endl;
 */

/*  char char1{},char2{};
    cout << "Enter 2 characters seperated by a space: ";
    cin >> char1 >> char2;
    equalResult = (char1 == char2);
    notEqualResult = (char1!=char2);
    cout << "Comparision result(equals): " << equalResult << endl;
    cout << "Comparision result(not equals): " << notEqualResult << endl;
 */
/* 
    double double1{},double2{};
    cout << "Enter 2 doubles seperated by a space: ";
    cin >> double1 >> double2;
    equalResult = (double1 == double2);
    notEqualResult = (double1!=double2);
    cout << "Comparision result(equals): " << equalResult << endl;
    cout << "Comparision result(not equals): " << notEqualResult << endl;
 */
    int num1{};
    double double1{};
    cout << "Enter an integer and a double seperated by a space: ";
    cin >> num1 >> double1;
    equalResult = (num1 == double1);
    notEqualResult = (num1!=double1);
    cout << "Comparision result(equals): " << equalResult << endl;
    cout << "Comparision result(not equals): " << notEqualResult << endl;

    return 0;
}