#include <iostream>

using namespace std;

int Add2Values(int, int);

int main (int argc, char** argv)
{
    
    int x, y;
    cout << argv[0] << "-" << argv[1] << "\n";
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "\nEnter y Value: ";
    cin >> y;

    cout << "\n__________________\n";

    cout << "=" << Add2Values(x, y);

    return 0;
}

int Add2Values(int x, int y)
{
    return x + y;
}
