#include <iostream>

using namespace std;

int Add2Values(int x, int y);

int main()
{
    int x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    if (x<=0) {
        cout<<"Invalid";
    }
    cout << "\nEnter y Value: ";
    cin >> y;
    if (y<=0) {
        cout<<"Invalid";
    }

    cout << "\n__________________\n";

    cout << "= " << Add2Values(x, y);
    return 0;
}

int Add2Values(int x, int y)
{
    return x + y;
}
