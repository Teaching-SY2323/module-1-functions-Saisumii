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
    cout << "\nEnter y Value: ";
    cin >> y;

    cout << "\n__________________\n";

    cout << "= " << Add2Values(x, y);
    return 0;
}

int Add2Values(int x, int y)
{
    return x + y;
}
