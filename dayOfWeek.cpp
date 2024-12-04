#include <iostream>
using namespace std;

int main() {
    int m, d, y;

    cout << "Enter the month (1-12): ";
    cin >> m;
    cout << "Enter the day (1-31): ";
    cin >> d;
    cout << "Enter the year: ";
    cin >> y;

    int y0 = y - (14 - m) / 12;

    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;

    int m0 = m + 12 * ((14 - m) / 12) - 2;

    int d0 = (d + x + (31 * m0) / 12) % 7;

    cout << "The day of the week is: " << d0 << endl;
    cout << "(0 = Sunday, 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday)" << endl;

}
