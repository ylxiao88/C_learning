#include <iostream>

using namespace std;
double ly2au(float);


int main()
{
    float light_year;

    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = " << ly2au(light_year) << " astronomical units\n";
    return 0;
}

double ly2au(float ly)
{
    return 63240*ly;
}