#include <iostream>

using namespace std;

int main()
{

    int num1 {100}, num2 {200};
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl; 
    
    //or

    int result = num1+num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    //Subtraction
    result = num1-num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    //Multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    //Division (Whole Numbers)
    result = num1/num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
   /* the answer for this will not be accurate because 
    of the type that num1, num2 and result are declared as
   */
    //Division (Real Numbers)
    float fResult {0}, fNum1{100}, fNum2{200};
    fResult = fNum1/fNum2;
    cout << fNum1 << " / " << fNum2 << " = " << fResult << endl;

    //Modulus (Get the remainder)
    result = num2%num1;
    cout << num2 << " % " << num1 << " = " << result << endl;

    num1 = 10, num2 = 3;
    result = num1%num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    //Bodmas
    result = num1 * 10 + num2;
    cout << num1 << " * 10 +" << num2 << " = " << result << endl;

    


    return 0;
} 