#include <iostream>

using namespace std;

int main()
{
    const int coef = 12;
    int height;
    int foot;
    int inch;

    cout << "Enter your hight(inch): ";
    cin >> height;

    foot = height / coef;
    inch = height % coef;

    cout << "Your height is " << foot << " foot and " << inch << " inch\n";
}