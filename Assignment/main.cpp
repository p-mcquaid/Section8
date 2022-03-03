#include <iostream>

using namespace std;

int main()
{
    int num1{10}, num2{20};

    cout << "Number 1 is: " << num1 << endl;
    cout << "Number 2 is: " << num2 << endl;

    num1 = 100;// Assigning 100 to num 1, replacing its original value
    cout << "Number 1 is now: " << num1 << endl;

    num2 = num1;
    cout << "Num2 should now equal the value of num1: " << num2 << endl;

    //assigment is performed right to left
    //the below expression will change num2 to 1000
    //then assign the value of num2 to num1 which will
    //also be 1000
    num1 = num2 = 1000;
    cout << "Number 1 is now: " << num1 << endl;
    cout << "Number 2 is now: " << num2 << endl;
    /* Invalid Assignments
        100 = num1; 100 is a literal number and not assigned anywhere therefore nothing can be assigned to it

        const int num3 = 100;
        num3 = 50; Since num 3 is a constant, its value cannot be altered so an error occurs

        num2 = "Paul"; Wrong type trying to be assigned therefore it'll populate an error
    
    */

    return 0;
}