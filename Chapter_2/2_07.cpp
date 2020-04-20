#include <iostream>
using namespace std;

void showtime(int, int);

int main()
{
    int hour;
    int minute;
    cout << "Enter the number of hours:";
    cin >> hour;
    cout << "Enter the number of minutes:";
    cin >> minute;
    showtime(hour, minute);
}

void showtime(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}