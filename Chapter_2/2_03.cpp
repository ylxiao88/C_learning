#include <iostream>

using namespace std;
void line1(int);
void line2(int);

int main()
{ 
    line1(2);
    line2(2);
    return 0;
}

void line1(int num)
{
    int i;
    for (i=0; i<num; i++)
        cout << "Three blind mice" << endl;
}

void line2(int num)
{
    int i;
    for (i=0; i<num; i++)
        cout << "See how they run" << endl;
}