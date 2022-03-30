#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int height = {0};
    int base = {0};

    cout << "height of triangle = ";
    cin >> height;
    cout << "base of triangle = ";
    cin >> base;
    cout << "\n";

    const int rows = height;
    const int cols = base * 3;

    // invariant writtern r Rows so far
    for (int r = 0; r != rows; ++r)
    {
        for (int c = 0; c != cols; ++c)
        {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}