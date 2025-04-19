#include <iostream>

using namespace std;

int main() {
    double temperature;
    char unit;

    cout<<"Temperature Conversion\n";

    cout<<"What would you like to convert to? (F or C): ";
    cin>>unit;



    if ( unit=='F'||unit=='f') {
        cout<<"Enter Temperature in Celsius: ";
        cin>>temperature;
        temperature=(temperature*1.8)+32;
    }else if (unit=='C'||unit=='c') {
        cout<<"Enter Temperature in Fahrenheit: ";
        cin>>temperature;
        temperature = (temperature-32)/1.8;
    }else {
        std::cout<<"Invalid Input\n";
        return -1;
    }

    cout<<"Temperature in "<<unit<<" is: "<<temperature<<endl;

    return 0;
}