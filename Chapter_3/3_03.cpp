#include <iostream>

using namespace std;

int main()
{
    const float deg2min = 60;
    const float min2sec = 60;

    int deg;
    int minu;
    int sec;
    float res;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n"
        "First, enter the degrees:";
    cin >> deg;
    cout << "Next, enter the minutes of arc:";
    cin >> minu;
    cout << "Finally, enter the seconds of arc:";
    cin >> sec;

    res = deg + (minu + sec/min2sec)/deg2min;
    
    cout << deg << " degress, " << minu << " minutes, " << sec << " seconds = " 
        << res << " degress" << endl;

}