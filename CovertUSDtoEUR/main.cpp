#include <iostream>

using namespace std;

int main(){
    const double usdPerEUR{1.19};

    cout << "Covert Dollars to Euros" << endl;
    cout << "Please enter your amount of Euros: ";

    double euroAmount {0.0};
    double dollars{0.0};

    cin >> euroAmount;

    dollars = euroAmount * usdPerEUR;

    cout << euroAmount << "  euro(s)coverted to dollars is equal to " <<
    dollars << endl;
    cout << endl;
    return 0;
}