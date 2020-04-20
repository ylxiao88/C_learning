#include <iostream>

using namespace std;
float cle2fah(float);


int main()
{
    float cels;

    cout << "Please enter a Celsius value: ";
    cin >> cels;
    cout << cels << " degress Celsius is " << cle2fah(cels) << " degress Fahrenheit\n";
    return 0;
}

float cle2fah(float cles)
{
    return 1.8*cles + 32.0;
}