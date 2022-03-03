#include <iostream>

using namespace std;

int main(){
    int num1{},num2{};

    cout << boolalpha;
    /* cout << "Enter 2 integers seperated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
 */

    const int lower{10}, higher{20};

    cout << "Enter an integer >  10: " << endl;
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower);

    cout << "\nEnter an integer <= 20: " << endl;
    cin >>num2;
    cout << num2 << " <= " << higher << " is " << (num2 <= higher);

    return 0;
}