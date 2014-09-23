#include <iostream>
using namespace std;

int countdown(int y) 
{
    cout << y << endl;
    if (y==1)
    {
        return 1;
    }
    else 
    {
        return countdown(y-1);
    }
}

int main() 
{
    cout << "Countdown from ten: " << endl;

    cout << countdown(10) << endl;
}
