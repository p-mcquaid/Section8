#include <iostream>

using namespace std;

int main()
{

    // int num{};
    // const int lower{10}, upper{20};
    cout << boolalpha;

    //Enter an integer, see if it falls withing the bounds set
    /* 
    cout << "Enter an integer. The bounds are set to " << lower << " and " << upper << endl;
    cin >> num;

    bool withinBounds{false};
    withinBounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " & " << upper << " : " << withinBounds << endl;

    bool outsideBounds{false};
    outsideBounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " & " << upper << " : " << outsideBounds << endl;

    bool onBounds{false};
    onBounds = (num == lower || num == upper);
    cout << num << " is exactly " << lower << " or " << upper << " : " << onBounds << endl; 
 */

    bool wearCoat{false};
    double temperature{0};
    int windSpeed{0};

    const double tempForCoat{5};
    const int windSpeedForCoat{25};

    cout << "Enter the current temperature: ";
    cin >> temperature;
    cout << "\nEnter the current wind speed: ";
    cin >> windSpeed;

    //using 'or' to detirmine if you need a coat is needed
    wearCoat = (temperature <= tempForCoat || windSpeed >= windSpeedForCoat);
    cout << "Temperature is " << temperature << " & wind speed is " << windSpeed
         << ". Should you wear a coat? " << wearCoat << endl;

    //using 'and' to detirmine if you should wear a coat
    wearCoat = (temperature <= tempForCoat && windSpeed >= windSpeedForCoat);
    cout << "Temperature is " << temperature << " & wind speed is " << windSpeed
         << ". Should you wear a coat? " << wearCoat << endl;
    return 0;
}