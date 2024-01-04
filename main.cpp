#include <iostream>

using namespace std;

double Add2Values(double x, double y);

int main()
{
    double x, y;
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

double Add2Values(double x, double y)
{
    return x + y;
}
