#include <iostream>
using namespace std;

int main(){
    double temperature;
    cout << "Enter the temperature in celsius: " << endl;
    cin >> temperature;
    cout << "The temperature in Fahrenheit is : " << ((9 * temperature) / 5 ) + 32;
    return 0;
}