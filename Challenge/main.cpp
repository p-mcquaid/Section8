#include <iostream>

using namespace std;

int main() {
    //Work out change to be given when given an amount in pennies


    // work out how many whole pounds are divisable into amount, take that amount away from the total, repeat for next currency piece

    int pennies{0}, pounds{0}, fiftyPence{0}, twentyPence{0}, tenPence{0}, fivePence{0}, twoPence{0}, onePence{0};


    /* cout << "Enter an amount in pennies" << endl;
    cin >> pennies;
    pounds = pennies/100;
    pennies -= pounds*100;
   
    fiftyPence = pennies/50;
    pennies -= fiftyPence*50;
    
    twentyPence = pennies/20;
    pennies -= twentyPence*20;
    
    tenPence = pennies/10;
    pennies -= tenPence*10;

    fivePence = pennies/5;
    pennies -= fivePence*5;
    
    twoPence = pennies/2;
    pennies -= twoPence*2;

    onePence = pennies/1;
    pennies -= onePence;

    cout << "Pounds: " << pounds
    << "\nFifty Pence:  " << fiftyPence
    << "\nTwenty Pence: " << twentyPence
    << "\nTen Pence:    " << tenPence
    << "\nFive Pence:   " << fivePence
    << "\nTwo Pence:    " << twoPence
    << "\nOne Pence:    " << onePence
    << endl; */



// Modulus solution
    cout << "Enter an amount in pennies" << endl;
    cin >> pennies;

    pounds = pennies/100;
    pennies %= 100;

    fiftyPence = pennies/50;
    pennies %= 50;
    
    twentyPence = pennies/20;
    pennies %= 20;
    
    tenPence = pennies/10;
    pennies %= 10;

    fivePence = pennies/5;
    pennies %= 5;
    
    twoPence = pennies/2;
    pennies %= 2;

    onePence = pennies/1;

    cout << "Pounds: " << pounds
    << "\nFifty Pence:  " << fiftyPence
    << "\nTwenty Pence: " << twentyPence
    << "\nTen Pence:    " << tenPence
    << "\nFive Pence:   " << fivePence
    << "\nTwo Pence:    " << twoPence
    << "\nOne Pence:    " << onePence
    << endl;
    return 0;
}