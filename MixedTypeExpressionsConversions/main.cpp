#include <iostream>

using namespace std;

int main(){

    int total{}, num1{}, num2{},num3{};
    const int count{3};
    cout << "Please enter 3 numbers to find the average of them" << endl;
    cin >> num1 >> num2 >> num3;

    total = num1+num2+num3;

    double avg{0.0};
    //Casts total as a double to enable accurate division
    avg = static_cast<double>(total)/count;
    //avg = (double)total/count Old style of casting

    cout << "The three numbers entered were: " << num1 << "," << num2 << " & " << num3 << endl;
    cout << "The sum of the three numbers is: " << total << endl;
    cout << "The average of the numbers is: " << avg << endl;

    return 0;
}