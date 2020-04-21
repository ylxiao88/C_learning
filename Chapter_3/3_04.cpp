#include <iostream>

using namespace std;

int main()
{
    long input;
    int day;
    int hour;
    int minute;
    int second;


    cout << "Enter the number of seconds:";
    cin >> input;

    second = input % 60;
    minute = input / 60 % 60;
    hour = input / (60*60) % 24 ;
    day = input / (60*60*24);

    cout << input << " seconds = " << day << " days, " 
        << hour << " hours, " << minute << " minutes, "
        << second << " seconds" ;
    
}