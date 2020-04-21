#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int foot2inch = 12;
    const float inch2meter = 0.0254;
    const float kg2pound = 2.2;

    float height1;
    float height2;
    float weight;
    float BMI;

    cout << "Enter your hight(in foot and inch): \n";
    cout << "foot:";
    cin >> height1;
    cout << "inch:";
    cin >> height2;

    cout << "Enter your weight(in pound): ";
    cin >> weight;

    BMI = weight/kg2pound / pow((height1*foot2inch + height2)*inch2meter, 2);
    
    cout << "BMI = " << BMI << endl;

}